#include <cstdio>
#define MOD 1000000003
int n, k, dp[1001][1001];
int main(){
  scanf("%d %d", &n, &k);
  dp[3][1] = 3, dp[4][1] = 4, dp[4][2] = 2;
  for(int i = 5;i <= n;i++){
    dp[i][1] = i;
    for(int j = 2;j < i;j++)
      dp[i][j] = (dp[i - 1][j] + dp[i - 2][j - 1]) % MOD;
  }
  printf("%d\n", dp[n][k]);
}
