#include <stdio.h>

int main(){
	int i, j, dp[301] = {0}, n, str[301] = {0};
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		scanf("%d", &str[i]);
	dp[1] = str[1], dp[2] = str[1] + str[2];
	for(i = 3;i <= n;i++){
		int max = 0;
		if(max < dp[i - 3] + str[i - 1])	
			max = dp[i - 3] + str[i - 1];
		if(max < dp[i - 2])	
			max = dp[i - 2];
		dp[i] = max + str[i];
	}
	printf("%d\n", dp[n]);
}