#include <cstdio>

int main(){
	int t, n, m;
	scanf("%d", &t);
	while(t--){
		int i, j, dp[10001] = {0}, money[21] = {0};
		scanf("%d", &n);
		for(i = 1;i <= n;i++)
			scanf("%d", &money[i]);		
		scanf("%d", &m);
		
		for(i = 1;i <= n;i++){
			dp[money[i]]++;
			for(j = money[i] + 1;j <= m;j++){
				dp[j] += dp[j - money[i]];
			}
		}
		printf("%d\n", dp[m]);
	}
}