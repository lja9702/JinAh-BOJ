#include <stdio.h>
#include <algorithm>
using namespace std;

int dp[1001][3] = {0};
int main(){
	int i, n, arr[1001][3] = {0};
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	}
	dp[1][0] = arr[1][0], dp[1][1] = arr[1][1], dp[1][2] = arr[1][2];
	for(i = 2;i <= n;i++){
			dp[i][0] = arr[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
			dp[i][1] = arr[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
			dp[i][2] = arr[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
	}
	printf("%d\n", min(dp[n][0], min(dp[n][1], dp[n][2])));
}