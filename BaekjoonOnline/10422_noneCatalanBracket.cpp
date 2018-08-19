#include <cstdio>
#include <cstring>
long long dp[2600][2600];
int t, n;
long long go(int n, int m){
  if(n < 0 || m < 0) return 0;
  if(n < m) return dp[n][m] = 0;
  else if(!n && !m) dp[n][m] = 1;
  if(dp[n][m] != -1)  return dp[n][m];
  dp[n][m] = go(n - 1, m) + go(n, m - 1);
  return dp[n][m] % 1000000007;
}
int main(){
  scanf("%d", &t);
  memset(dp, -1, sizeof(dp));
  while(t--){
    scanf("%d", &n);
    if(n % 2) printf("0\n");
    else  printf("%lld\n", go(n / 2, n / 2));
  }
}
