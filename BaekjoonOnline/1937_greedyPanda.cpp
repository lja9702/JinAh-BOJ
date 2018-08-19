#include <cstdio>
#include <algorithm>

int res = 0, arr[501][501] = {0}, n, dp[501][501] = {0};
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int dfs(int x, int y){
	if(dp[x][y])	return dp[x][y];
	dp[x][y] = 1;
	for(int i = 0;i < 4;i++){
		int tempx = x + dist[i][0], tempy = y + dist[i][1];
		if(tempx > 0 && tempx <= n && tempy > 0 && tempy <= n){
			if(arr[tempx][tempy] > arr[x][y])
				dp[x][y] = std::max(dp[x][y], dfs(tempx, tempy) + 1);
		}
	}
	return dp[x][y];
}
int main(){
	int res = 0;
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			dfs(i, j);
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			res = std::max(res, dp[i][j]);
		}
	}
	printf("%d\n", res);
}