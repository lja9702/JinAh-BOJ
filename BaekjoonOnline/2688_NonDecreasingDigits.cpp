#include <cstdio>
long long dp[65][11] = {0}, dp2[65] = {0}; //  j로 시작하는 i자리수
int main(){
  int n, t;
  for(int i = 0;i <= 9;i++) dp[1][i] = 1;
  for(int i = 1;i <= 9;i++) dp[2][i] = 9 - i + 1;
  dp2[1] = 10, dp2[2] = 55;
  for(int i = 3;i <= 64;i++){
    long long tot = 0;
    for(int j = 9;j >= 1;j--){
      dp[i][j] = (dp[i - 1][j] + dp[i][j + 1]);
      tot += dp[i][j];
    }
    dp2[i] = (tot + dp2[i - 1]);
  }
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    printf("%lld\n", dp2[n]);
  }
}
