#include <cstdio>
#include <algorithm>
int n, a, mul[501], dp[501][501];
int main(){
  scanf("%d", &n);
  for(int i = 0;i < 2;i++) scanf("%d", &mul[i]);
  for(int i = 2;i <= n;i++)
    scanf("%d %d", &a, &mul[i]);
  for(int diag = 0;diag < n;diag++){
    for(int i = 1;i <= n - diag;i++){
      int j = i + diag;
      if(i == j)  continue;
      dp[i][j] = 1 << 30;
      for(int k = i;k < j;k++)
        dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k + 1][j] + mul[i - 1] * mul[k] * mul[j]);
    }
  }
  printf("%d\n", dp[1][n]);
}
