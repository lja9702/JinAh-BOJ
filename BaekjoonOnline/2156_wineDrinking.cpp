#include <cstdio>

int main(){
	int n, i, max, wine[10001] = {0}, dp[10001] = {0};
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		scanf("%d", &wine[i]);
	dp[1] = wine[1], dp[2] = wine[1] + wine[2];
	for(i = 3;i <= n;i++){
		max = dp[i - 1];
		if(max < wine[i] + dp[i - 2])
			max = wine[i] + dp[i - 2];
		if(max < wine[i] + wine[i - 1] + dp[i - 3])
			max = wine[i] + wine[i - 1] + dp[i - 3];
		dp[i] = max;
	}
	printf("%d\n", dp[n]);
}