#include <stdio.h>

int main(){
	int n, i, dp[1001] = {0};
	scanf("%d", &n);
	dp[1] = 1, dp[2] = 2;
	for(i = 3;i <= n;i++)
		dp[i] = (dp[i - 1] % 10007 + dp[i - 2] % 10007) % 10007;
	printf("%d\n", dp[n]);
}