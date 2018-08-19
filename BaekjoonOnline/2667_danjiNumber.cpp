#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

typedef struct _info{
	int x;
	int y;
	bool check;
	int val;
}Info;
int main(){
	char temp[30] = {0};
	Info info[26][26] = {0};
	int n, i, j, k, sum = 0, cnt[1000] = {0}, dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		scanf("%s", temp);
		for(j = 0;j < n;j++){
			info[i][j + 1].val = temp[j] - '0';
			info[i][j + 1].check = false, info[i][j + 1].x = i, info[i][j + 1].y = j + 1;
		}
	}
	queue<Info> Q;
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(info[i][j].val != 0 && !info[i][j].check){
				info[i][j].check = true;
				Q.push(info[i][j]);
				while(!Q.empty()){
					int x = Q.front().x, y = Q.front().y;
					cnt[sum]++;
					Q.pop();
					for(k = 0;k < 4;k++){
						int tempX = x + dist[k][0], tempY = y + dist[k][1];
						if(tempX > 0 && tempX <= n && tempY > 0 && tempY <= n){
							if(info[tempX][tempY].val != 0 && !info[tempX][tempY].check){
								info[tempX][tempY].check = true;
								Q.push(info[tempX][tempY]);
							}
						}
					}
				}
				sum++;
			}
		}
	}
	printf("%d\n", sum);
	sort(cnt, cnt+sum);
	for(i = 0;i < sum;i++)
		printf("%d\n", cnt[i]);
}