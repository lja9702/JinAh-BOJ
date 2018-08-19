#include <cstdio>
#include <algorithm>
int i, j, dp[100001] = {0};
int main(){
	int n;
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		dp[i] = i;
	for(i = 1;i <= n;i++){
		for(j = 1;j * j <= i;j++)
			dp[i] = std::min(dp[i], dp[i - j * j] + 1);
	}
	printf("%d\n", dp[n]);
}