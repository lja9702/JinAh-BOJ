#include <cstdio>
#include <set>
#include <cstring>
#include <algorithm>
using namespace std;
int n, arr[101][101] = {0}, comp = 0, res = 1, dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool check[101][101] = {0};
int dfs(int x, int y){
	for(int i = 0;i < 4;i++){
		int tempX = x + dist[i][0], tempY = y + dist[i][1];
		if(tempX > 0 && tempX <= n && tempY > 0 && tempY <= n && !check[tempX][tempY] && arr[tempX][tempY] > comp){
			check[tempX][tempY] = true;
			dfs(tempX, tempY);
		}
	}
}
int main(){
	set<int> S;
	int i, j;
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			scanf("%d", &arr[i][j]);
			S.insert(arr[i][j]);
		}
	}
	set<int>::iterator iter;
	for(iter = S.begin();iter != S.end();iter++){
		int cnt = 0;
		comp = *iter;
		memset(check, false, sizeof(check));
		for(i = 1;i <= n;i++){
			for(j = 1;j <= n;j++){
				if(!check[i][j] && arr[i][j] > comp){
					check[i][j] = true;
					dfs(i, j);
					cnt++;
				}
			}
		}
		res = max(res, cnt);
	}
	printf("%d\n", res);
}