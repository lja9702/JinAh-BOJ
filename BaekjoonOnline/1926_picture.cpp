#include <cstdio>
#include <queue>
using namespace std;
typedef struct _arr{
	int x, y, pic;
	bool check;
}Arr;
Arr arr[501][501] = {0};
int main(){
	int tot = 0,max = 0, i, j, n, m, dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
	scanf("%d %d", &n, &m);
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%d", &arr[i][j].pic);
			arr[i][j].x = i, arr[i][j].y = j;
			arr[i][j].check = false;
		}
	}
	queue<Arr> Q;
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			int cnt = 0;
			if(arr[i][j].pic == 1 && !arr[i][j].check){
				arr[i][j].check = true;
				tot++;
				Q.push(arr[i][j]);
				while(!Q.empty()){
					int x = Q.front().x, y = Q.front().y;
					cnt++;
					Q.pop();
					for(int p = 0;p < 4;p++){
						int tempX = x + dist[p][0], tempY = y + dist[p][1];
						if(tempX >= 0 && tempX < n && tempY >= 0 && tempY < m && arr[tempX][tempY].pic == 1 && !arr[tempX][tempY].check){
							arr[tempX][tempY].check = true;
							Q.push(arr[tempX][tempY]);
						}
					}
				}
				if(max < cnt)	max = cnt;
			}
		}
	}
	printf("%d\n%d\n", tot, max);
}