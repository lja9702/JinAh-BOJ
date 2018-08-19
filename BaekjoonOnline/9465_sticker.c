#include <stdio.h>

int main(){
	int i, j, k, t, n;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int arr[2][100001] = {0}, dp[2][100001] = {0};
		scanf("%d", &n);
		for(j = 0;j < 2;j++){
			for(k = 1;k <= n;k++){
				scanf("%d", &arr[j][k]);
			}
		}
		dp[0][1] = arr[0][1], dp[1][1] = arr[1][1];
		dp[0][2] = dp[1][1] + arr[0][2], dp[1][2] = dp[0][1] + arr[1][2];
		for(j = 3;j <= n;j++){
			if(arr[0][j] + dp[1][j - 1] > arr[0][j] + dp[1][j - 2])
				dp[0][j] = arr[0][j] + dp[1][j - 1];
			else if(arr[0][j] + dp[1][j - 1] <= arr[0][j] + dp[1][j - 2])
				dp[0][j] = arr[0][j] + dp[1][j - 2];

			if(arr[1][j] + dp[0][j - 1] > arr[1][j] + dp[0][j - 2])
				dp[1][j] = arr[1][j] + dp[0][j - 1];
			else if(arr[1][j] + dp[0][j - 1] <= arr[1][j] + dp[0][j - 2])
				dp[1][j] = arr[1][j] + dp[0][j - 2];	
		}
		if(dp[0][n] >= dp[1][n])
			printf("%d\n", dp[0][n]);
		else
			printf("%d\n", dp[1][n]);
	}
}

// dp[i][j]: [i][j]까지의 스티커 점수 합의 최댓값
// dp[0][j] = max(arr[0][j] + dp[1][j - 1], arr[0][j] + dp[1][j - 2])
// dp[1][j] = max(arr[1][j] + dp[0][j - 1], arr[1][j] + dp[0][j - 2])
// result: max(dp[0][n], dp[1][n])