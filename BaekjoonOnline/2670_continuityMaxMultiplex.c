#include <stdio.h>

int main(){
	int i, n;
	double max, num[10001] = {0}, dp[10001] = {0};
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		scanf("%lf", &num[i]);
	dp[1] = num[1], max = num[1];
	for(i = 2;i <= n;i++)
		dp[i] = (num[i] > dp[i - 1] * num[i] ? num[i] : dp[i - 1] * num[i]);
	for(i = 2;i <= n;i++){
		if(max < dp[i])
			max = dp[i];
	}
	printf("%.3lf\n", max);
}