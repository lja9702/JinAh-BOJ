#include <stdio.h>

int main(){
	int max, i, j, n, arr[1001] = {0}, dp[1001] = {0};
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		scanf("%d", &arr[i]);
		dp[i] = 1;
	}
	for(i = 2;i <= n;i++){
		max = 0;
		for(j = 1;j < i;j++){
			if(dp[max] < dp[j] && arr[j] > arr[i])
				max = j;
		}
		dp[i] += dp[max];
	}
	max = 0;
	for(i = 1;i <= n;i++){
		if(dp[max] < dp[i])
			max = i;
	}
	printf("%d\n", dp[max]);
}