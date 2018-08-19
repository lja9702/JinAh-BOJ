#include <stdio.h>

int main(){
	int t, n, i, j;
	long long dp[101] = {0};
	dp[1] = 1, dp[2] = 1, dp[3] = 1;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d", &n);
		for(j = 4;j <= n;j++)
			dp[j] = dp[j - 3] + dp[j - 2];
		printf("%lld\n", dp[n]);
	}
}