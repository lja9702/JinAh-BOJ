#include <cstdio>
#include <cmath>
long long dp[1100000] = {0};
const int mod = 1000000000;
int main(){
	int i, j, n;
	scanf("%d", &n);
	for(i = 0;i < 20;i++){
		long long temp = pow(2, i);
		dp[temp]++;
		for(j = temp;j <= n;j++)
			dp[j] = (dp[j] + dp[j - temp]) % mod;
	}
	printf("%lld\n", dp[n]);
}