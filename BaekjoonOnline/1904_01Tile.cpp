#include <cstdio>
int dp[1000001] = {0, 1, 2, }, n;
int main(){
  scanf("%d", &n);
  for(int i = 3;i <= n;i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
  printf("%d\n", dp[n]);
}
