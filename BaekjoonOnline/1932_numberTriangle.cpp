#include <cstdio>
#include <algorithm>
int num[501][501] = {0}, dp[501][501] = {0};
int main(){
	int n, i, j, res = 0;
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		for(j = 1;j <= i;j++)
			scanf("%d", &num[i][j]);
	dp[1][1] = num[1][1];
	for(i = 2;i <= n;i++){
		for(j = 1;j <= i;j++)
			dp[i][j] = std::max(dp[i-1][j-1], dp[i-1][j]) + num[i][j];
	}
	for(i = 1;i <= n;i++)	res = std::max(res, dp[n][i]);
	printf("%d\n", res);
}