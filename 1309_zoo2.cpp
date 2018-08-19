#include <cstdio>
int n, dp[100001];
int main(){
  scanf("%d", &n);
  dp[0] = 1, dp[1] = 3;
  for(int i = 2;i <= n;i++)
    dp[i] = ((dp[i - 1] * 2) % 9901 + dp[i - 2]) % 9901;
  printf("%d\n", dp[n]);
}
