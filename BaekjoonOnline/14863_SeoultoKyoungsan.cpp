#include <cstdio>
#include <algorithm>
using namespace std;
int walk[101][2] = {0}, bycl[101][2] = {0}, dp[101][100001] = {0}, n, k;
int main(){
	int i, j, res = 0;
	scanf("%d %d", &n, &k);
	for(i = 1;i <= n;i++)
		scanf("%d %d %d %d", &walk[i][0], &walk[i][1], &bycl[i][0], &bycl[i][1]);
	dp[1][walk[1][0]] = walk[1][1];
	
	if(dp[1][bycl[1][0]])	dp[1][bycl[1][0]] = max(bycl[1][1], walk[1][1]);
	else	dp[1][bycl[1][0]] = bycl[1][1];

	for(i = 2;i <= n;i++){
		for(j = bycl[i][0];j <= k;j++){
			if(dp[i - 1][j - bycl[i][0]] > 0)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - bycl[i][0]] + bycl[i][1]);
		}
		for(j = walk[i][0];j <= k;j++){
			if(dp[i - 1][j - walk[i][0]] > 0)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - walk[i][0]] + walk[i][1]);
		}
	}
	
	for(i = 1;i <= k;i++)
		res = max(res, dp[n][i]);
	printf("%d\n", res);
}

//dp[i][j]: 도시 i까지 j시간이 걸릴때의 최대금액
//