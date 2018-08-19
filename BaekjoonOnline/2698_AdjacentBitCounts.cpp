#include <cstdio>
int dp[101][101][2];
int main(){
  int t, n, k;
  dp[1][0][0] = 1, dp[1][0][1] = 1;
  for(int i = 2;i <= 100;i++){
    for(int j = 0;j < i;j++){
      dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][1];
      dp[i][j][1] = dp[i - 1][j][0] + dp[i - 1][j - 1][1];
    }
  }
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &n, &k);
    printf("%d\n", dp[n][k][0] + dp[n][k][1]);
  }
}
