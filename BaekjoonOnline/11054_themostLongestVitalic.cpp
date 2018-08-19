#include <cstdio>
#include <algorithm>
int n, dp[1001][2], arr[1001], res;
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++){
    scanf("%d", &arr[i]);
    dp[i][0] = 1, dp[i][1] = 1;
  }
  for(int i = 1;i <= n;i++){
    int cur = 0;
    for(int j = 1;j < i;j++){
      if(arr[i] > arr[j] && dp[j][0] > dp[cur][0])
        cur = j;
    }
    dp[i][0] += dp[cur][0];
  }
  for(int i = n;i >= 1;i--){
    int cur = 0;
    for(int j = n;j > i;j--){
      if(arr[i] > arr[j] && dp[j][1] > dp[cur][1])
        cur = j;
    }
    dp[i][1] += dp[cur][1];
  }
  for(int i = 1;i <= n;i++) res = std::max(res, dp[i][0] + dp[i][1]);
  printf("%d\n", res - 1);
}
