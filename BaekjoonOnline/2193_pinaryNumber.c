#include <stdio.h>

int main(){
	long long n, i, dp[91] = {0};
	scanf("%lld", &n);
	dp[1] = 1, dp[2] = 1;
	for(i = 3;i <= n;i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	printf("%lld\n", dp[n]);
}