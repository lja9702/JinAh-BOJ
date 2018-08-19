#include <cstdio>
#include <algorithm>
int arr[1001] = {0}, dp[1001] = {0};
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		scanf("%d", &arr[i]);
	for(i = 1;i <= n;i++){
		for(j = i;j <= n;j++)
			dp[j] = std::max(dp[j], dp[j - i] + arr[i]);
	}
	printf("%d\n", dp[n]);
}