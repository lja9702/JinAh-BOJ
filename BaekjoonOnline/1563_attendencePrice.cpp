#include <cstdio>
#define MOD 1000000
int dp[1001][2][3], n;
int main(){
  dp[1][0][0] = 1, dp[1][1][0] = 1, dp[1][0][1] = 1;
  scanf("%d", &n);
  for(int i = 2;i <= n;i++){
    for(int j = 0;j < 2;j++){
      for(int k = 0;k < 3;k++){
        dp[i][j][0] = (dp[i][j][0] + dp[i - 1][j][k]) % MOD;
        if(j == 0)
          dp[i][1][0] = (dp[i - 1][0][k] + dp[i][1][0]) % MOD;
        if(k < 2)
          dp[i][j][k + 1] = (dp[i][j][k + 1] + dp[i - 1][j][k]) % MOD;
      }
    }
  }
  int res = 0;
  for(int i = 0;i < 2;i++){
    for(int j = 0;j < 3;j++)
      res = (res + dp[n][i][j]) % MOD;
  }
  printf("%d\n", res);
}
//dp[i][j][k]: i일일때, j번 지각하고 k번 연속결석한 학생의 수
