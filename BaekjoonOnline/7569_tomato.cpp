#include <cstdio>
#include <queue> 

using namespace std;
typedef struct _arr{
	int x, y, z;
	bool check;
	int val, day;
}Arr;
Arr arr[101][101][101] = {0};
int main(){
	int m, n, h, i, j, k, tot = 0, max = 0;
	int dist[6][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}, {-1, 0, 0}, {0, -1, 0}, {0, 0, -1}};
	scanf("%d %d %d", &m, &n, &h);
	queue<Arr> Q;
	for(i = 1;i <= h;i++){
		for(j = 1;j <= n;j++){
			for(k = 1;k <= m;k++){
				scanf("%d", &arr[i][j][k].val);
				arr[i][j][k].x = i, arr[i][j][k].y = j, arr[i][j][k].z = k;
				arr[i][j][k].day = 0;
				if(arr[i][j][k].val == 1){
					arr[i][j][k].check = true;
					Q.push(arr[i][j][k]);
				}
				else if(arr[i][j][k].val == 0)
					arr[i][j][k].check = false;
				else
					arr[i][j][k].check = true;
				if(arr[i][j][k].val != 0)	tot++;
			}
		}
	}
	if(tot == h * m * n){
		printf("0\n");
		return 0;
	}
	while(!Q.empty()){
		int x = Q.front().x, y = Q.front().y, z = Q.front().z;
		Q.pop();
		for(int p = 0;p < 6;p++){
			int tempX = x + dist[p][0], tempY = y + dist[p][1], tempZ = z + dist[p][2];
			if(tempX > 0 && tempX <= h && tempY > 0 && tempY <= n && tempZ > 0 && tempZ <= m){
				if(arr[tempX][tempY][tempZ].val == 0 && !arr[tempX][tempY][tempZ].check){
					arr[tempX][tempY][tempZ].check = true;
					arr[tempX][tempY][tempZ].day = arr[x][y][z].day + 1;
					if(arr[tempX][tempY][tempZ].day > max)
						max = arr[tempX][tempY][tempZ].day;
					Q.push(arr[tempX][tempY][tempZ]);
				}
			}
		}
	}
	for(i = 1;i <= h;i++){
		for(j = 1;j <= n;j++){
			for(k = 1;k <= m;k++){
				if(!arr[i][j][k].check){
					printf("-1\n");
					return 0;
				}
			}
		}
	}
	printf("%d\n", max);
}