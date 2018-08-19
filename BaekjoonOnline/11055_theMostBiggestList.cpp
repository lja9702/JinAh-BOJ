#include <cstdio>
#include <algorithm>
int n, arr[1001], dp[1001], res;
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++) scanf("%d", &arr[i]);
  dp[0] = -1;
  for(int i = 1;i <= n;i++){
    int cur = 0;
    dp[i] = arr[i];
    for(int j = 1;j < i;j++){
      if(arr[i] > arr[j] && dp[cur] < dp[j]) cur = j;
    }
    if(cur) dp[i] += dp[cur];
  }
  for(int i = 1;i <= n;i++)
    res = std::max(dp[i], res);
  printf("%d\n", res);
}
