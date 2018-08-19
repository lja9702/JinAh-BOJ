#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int i, j, n, m, arr[301][301] ={0}, dp[301][301] = {0}, res = 0;
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= m;j++)
			scanf("%d", &arr[i][j]);
	}
	for(i = 1;i <= n;i++){
		for(j = 1;j <= m;j++){
			dp[i][j] = arr[i][j] + max(dp[i][j - 1], dp[i - 1][j]);
			res = max(dp[i][j], res);
		}
	}
	printf("%d\n", res);
}