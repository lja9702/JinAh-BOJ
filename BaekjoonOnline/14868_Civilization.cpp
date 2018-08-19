#include <cstdio>
#include <utility>
#include <queue>
#include <cstring>
using namespace std;
queue <pair<int, int>> Q;
bool flag = false;
int check[2001][2001] = {0}, group[100001] = {0}, height[100001] = {0};
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void setCheck(int a, int b){
	int c = a,d = b;
	while(group[a] != a)
		a = group[a];
	while(group[b] != b)
		b = group[b];
	if(a != b)
		flag = true;
}
void disJointSet(int a, int b){
	while(group[a] != a)
		a = group[a];
	while(group[b] != b)
		b = group[b];
	if(a != b){
		if(height[a] > height[b])
			group[b] = a;
		else if(height[a] < height[b])
			group[a] = b;
		else
			height[a]++, group[b] = a;
	}
}
int main(){
	bool isInit = true;
	int i, j, n, k;
	scanf("%d %d", &n, &k);
	int cnt = k, temp = 0, res = 0;
	for(i = 1;i <= k;i++){
		int x, y;
		scanf("%d %d", &x, &y);
		Q.push(make_pair(x, y)), check[x][y] = i, group[i] = i, height[i] = 1;
		for(j = 0;j < 4;j++){
			int tempX = x + dist[j][0], tempY = y + dist[j][1];
			if(tempX >= 1 && tempX <= n && tempY >= 1 && tempY <= n){
				if(check[tempX][tempY] && check[tempX][tempY] != check[x][y]){
					disJointSet(check[x][y], check[tempX][tempY]);
				}
			}
		}
	}
	if(k == 1){
		printf("0\n");
		return 0;
	}
	for(i = 2;i <= k;i++){
		setCheck(1, i);
		if(flag)
			break;
	}
	if(isInit && !flag){
		printf("0\n");
		return 0;
	}
	flag = false;
	while(!Q.empty()){
		int x = Q.front().first, y = Q.front().second;
		Q.pop();
		for(i = 0;i < 4;i++){
			int tempX = x + dist[i][0], tempY = y + dist[i][1];
			if(tempX >= 1 && tempX <= n && tempY >= 1 && tempY <= n){
				if(!check[tempX][tempY]){
					Q.push(make_pair(tempX, tempY));
					check[tempX][tempY] = check[x][y], temp++;
					for(j = 0;j < 4;j++){
						int tX = tempX + dist[j][0], tY = tempY + dist[j][1];
						if(tX >= 1 && tX <= n && tY >= 1 && tY <= n){
							if(check[tX][tY] != 0 && check[tX][tY] != check[tempX][tempY])
								disJointSet(check[tempX][tempY], check[tX][tY]);
						}
					}
				}
				else if(check[tempX][tempY] != check[x][y])
					disJointSet(check[x][y], check[tempX][tempY]);
			}
		}
		cnt--;
		if(cnt == 0){
			for(i = 2;i <= k;i++){
				setCheck(1, i);
				if(flag)
					break;
			}
			if(!flag){
				printf("%d\n", res + 1);
				return 0;
			}
			flag = false, cnt = temp, temp = 0, res++;
		}
	}
}