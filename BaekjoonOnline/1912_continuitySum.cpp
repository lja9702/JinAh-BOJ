#include <cstdio>
#include <algorithm>
int main(){
	long long i, num[100001] = {0}, n, dp[100001] = {0};
	scanf("%lld", &n);
	for(i = 1;i <= n;i++)
		scanf("%lld", &num[i]);
	dp[1] = num[1];
	long long res = dp[1];
	for(i = 2;i <= n;i++)
		dp[i] = std::max(num[i], dp[i - 1] + num[i]);
	for(i = 2;i <= n;i++){
		res = std::max(res, dp[i]);
	}
	printf("%lld\n", res);
}