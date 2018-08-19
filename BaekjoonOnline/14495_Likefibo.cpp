#include <cstdio>
long long n, dp[120];
int main(){
  dp[1] = dp[2] = dp[3] = 1;
  scanf("%lld", &n);
  for(int i = 4;i <= n;i++)
    dp[i] = dp[i - 1] + dp[i - 3];
  printf("%lld\n", dp[n]);
}
