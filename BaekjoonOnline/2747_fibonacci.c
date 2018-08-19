#include <stdio.h>

int main(){
	int i, n, dp[46] = {0};
	dp[1] = 1;
	scanf("%d", &n);
	for(i = 2;i <= n;i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	printf("%d\n", dp[n]);
}