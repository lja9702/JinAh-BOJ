#include <cstdio>
int dp[201][201] = {0}, i, j;
int main(){
	long long n, k;
	scanf("%lld %lld", &n, &k);
	for(i = 1;i <= n;i++)	dp[i][1] = 1;
	for(i = 1;i <= k;i++)	dp[0][i] = 1;
	for(i = 1;i <= n;i++){
		for(j = 1;j <= k;j++)
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
	}
	printf("%lld\n", dp[n][k] % 1000000000);
}