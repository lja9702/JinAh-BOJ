#include <cstdio>
int dp[31][31] = {0}, r, c, w, sum = 0;
int main(){
	for(int i = 1;i <= 30;i++)	dp[i][1] = 1, dp[i][i] = 1;
	for(int i = 3;i <= 30;i++){
		for(int j = 2;j < i;j++)
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
	}
	scanf("%d %d %d", &r, &c, &w);
	for(int i = r;i < r + w;i++){
		for(int j = c;j <= c + i - r;j++)
			sum += dp[i][j];
	}
	printf("%d\n", sum);
}