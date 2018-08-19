#include <cstdio>
int dp[1000001];
int main(){
  int n;
  dp[0] = 0, dp[1] = 1;
  scanf("%d", &n);
  for(int i = 2;i <= n;i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
  printf("%d\n", dp[n]);
}
