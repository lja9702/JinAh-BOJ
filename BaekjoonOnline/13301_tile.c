#include <stdio.h>

int main(){
	long long i, n, dp[81] = {0};
	scanf("%lld", &n);
	dp[1] = 4, dp[2] = 6;
	for(i = 3;i <= n;i++)
		dp[i] = dp[i - 2] + dp[i - 1];
	printf("%lld\n", dp[n]);
}