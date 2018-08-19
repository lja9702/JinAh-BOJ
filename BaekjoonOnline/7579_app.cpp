#include <cstdio>
#include <algorithm>
int n, m, cost[101], app[101], res = 1 << 29, sum, minc = 1 << 29, minm = 1 << 29;
long long dp[101][10001];
//dp[i][j]:A부터 i번째 앱까지 중에 비활성화했을 때 비용이 j일때의 사용중인 총 메모리
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++){
    scanf("%d", &app[i]);
    minm = std::min(minm, app[i]);
  }
  for(int i = 1;i <= n;i++){
    scanf("%d", &cost[i]);
    dp[i][cost[i]] = app[i];
    minc = std::min(minc, cost[i]);
  }
  if(minm >= m){
    printf("%d\n", minc);
    return 0;
  }
  for(int i = 1;i <= n;i++){
    sum += cost[i];
    for(int j = minc;j <= sum;j++){
      dp[i][j] = std::max(dp[i - 1][j], std::max(dp[i][j - 1], dp[i][j]));
      if(j >= cost[i])  dp[i][j] = std::max(dp[i][j], dp[i - 1][j - cost[i]] + app[i]);
      if(dp[i][j] >= m) res = std::min(res, j);
    }
  }
  printf("%d\n", res);
}
