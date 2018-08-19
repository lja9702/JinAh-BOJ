#include <cstdio>
#include <algorithm>
int n, m, cost[101], res = 1 << 29;
long long dp[10001] = {0}, app[101];
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++)  scanf("%lld", &app[i]);
  for(int i = 1;i <= n;i++)  scanf("%d", &cost[i]);
  for(int i = 1;i <= n;i++){
    for(int j = 10000;j >= 0;j--){
      if(dp[j]) dp[j + cost[i]] = std::max(dp[j + cost[i]], dp[j] + app[i]);
    }
    dp[cost[i]] = std::max(dp[cost[i]], app[i]);
  }
  for(int i = 0;i <= 10000;i++){
    if(dp[i] >= m){
      printf("%d\n", i);
      return 0;
    }
  }
}
