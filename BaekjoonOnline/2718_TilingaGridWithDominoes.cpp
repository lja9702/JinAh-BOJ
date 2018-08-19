#include <cstdio>
long long dp[1001] = {0};
int main(){
	int i, j, t, n;
	scanf("%d", &t);
	dp[1] = 1, dp[2] = 5, dp[3] = 11;
	for(i = 3;i <= 1000;i++){
		for(j = 1;j < i;j++){
			dp[i] += dp[j] * 2;
		}
	}
	while(t--){
		scanf("%d", &n);
		printf("%lld\n", dp[n]);
	}
}