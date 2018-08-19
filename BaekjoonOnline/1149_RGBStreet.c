#include <stdio.h>

int main(){
	int dp[1001][3] = {0}, rgb[1001][3] = {0}, min, i, j, k, n;
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		for(j = 0;j < 3;j++)
			scanf("%d", &rgb[i][j]);
	}
	dp[1][0] = rgb[1][0], dp[1][1] = rgb[1][1], dp[1][2] = rgb[1][2];
	for(i = 2;i <= n;i++){
		for(j = 0;j < 3;j++){
			min = 1 << 30;
			for(k = 0;k < 3;k++){
				if(k != j && min > dp[i - 1][k])
					min = dp[i - 1][k];
			}
			dp[i][j] = rgb[i][j] + min;
		}
	}
	min = dp[n][0];
	for(i = 1;i < 3;i++){
		if(min > dp[n][i])
			min = dp[n][i];
	}
	printf("%d\n", min);
}