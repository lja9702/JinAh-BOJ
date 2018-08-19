#include <stdio.h>

int main(){
	int t, n, i, dp[12] = {0};
	scanf("%d", &t);
	dp[1] = 1, dp[2] = 2, dp[3] = 4;
	for(i = 4;i <= 11;i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	for(i = 0;i < t;i++){
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
}