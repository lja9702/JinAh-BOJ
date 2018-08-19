#include <cstdio>
int dp[100001], n;
int main(){
  dp[0] = 1, dp[1] = 3, dp[2] = 7;
  scanf("%d", &n);
  for(int i = 3;i <= n;i++)
    dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
  printf("%d\n", dp[n]);
}
