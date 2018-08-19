#include <stdio.h>
#define MOD 1000000000
int main(){
	long long i, j, n, dp[101][10] = {0}, sum = 0;
	scanf("%lld", &n);
	for(i = 1;i <= 9;i++)
		dp[1][i] = 1;
	for(i = 1;i < n;i++){
		for(j = 0;j <= 9;j++){
			if(j == 0)
				dp[i + 1][j + 1] = (dp[i + 1][j + 1] + dp[i][j]) % MOD;
			else if(j == 9)
				dp[i + 1][j - 1] = (dp[i + 1][j - 1] + dp[i][j]) % MOD;
			else{
				dp[i + 1][j - 1] = (dp[i + 1][j - 1] + dp[i][j]) % MOD;
				dp[i + 1][j + 1] = (dp[i + 1][j + 1] + dp[i][j]) % MOD;
			}
		}
	}
	for(i = 0;i <= 9;i++){
		sum = (sum + dp[n][i]) % MOD;
	}
	printf("%lld", sum % MOD);
}