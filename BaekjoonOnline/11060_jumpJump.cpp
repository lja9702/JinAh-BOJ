#include <cstdio>
#include <algorithm>
int n, arr[1001], dp[1101];
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= 1101;i++)  dp[i] = 1 << 29;
  for(int i = 1;i <= n;i++) scanf("%d", &arr[i]);
  dp[0] = 0, dp[1] = 0;
  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= arr[i];j++)
      dp[i + j] = std::min(dp[i + j], dp[i] + 1);
  }
  if(dp[n] == 1 << 29)  printf("-1\n");
  else printf("%d\n", dp[n]);
}
