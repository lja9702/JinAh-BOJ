#include <cstdio>
int dp[1001][11] = {0}, dp2[1001] = {0}; //  j로 시작하는 i자리수
int main(){
  int n, res = 0;
  scanf("%d", &n);
  for(int i = 0;i <= 9;i++) dp[1][i] = 1;
  for(int i = 1;i <= 9;i++) dp[2][i] = 9 - i + 1;
  dp2[1] = 10, dp2[2] = 55;
  for(int i = 3;i <= n;i++){
    int tot = 0;
    for(int j = 9;j >= 1;j--){
      dp[i][j] = (dp[i - 1][j] + dp[i][j + 1]) % 10007;
      tot = (tot + dp[i][j]) % 10007;
    }
    dp2[i] = (tot + dp2[i - 1]) % 10007;
  }
  printf("%d\n", dp2[n]);
}
