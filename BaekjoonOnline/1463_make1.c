#include <stdio.h>
int dp[1000001] = {0};
int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 2;i <= n;i++){
		int min = 1 << 30;
		if(i % 2 == 0 && dp[i / 2] < min)
			min = dp[i / 2];
		if(i % 3 == 0 && dp[i / 3] < min)
			min = dp[i / 3];
		if(dp[i - 1] < min)
			min = dp[i - 1];
		dp[i] = min + 1;
	}
	printf("%d\n", dp[n]);
}