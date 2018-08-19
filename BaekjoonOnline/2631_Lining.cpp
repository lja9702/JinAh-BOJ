#include <cstdio>
#include <algorithm>
int n, arr[201], dp[201], res;
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++) scanf("%d", &arr[i]);
  for(int i = 1;i <= n;i++){
    dp[i] = 1;
    for(int j = 1;j < i;j++){
      if(arr[j] < arr[i] && dp[i] < dp[j] + 1)
        dp[i] = dp[j] + 1;
    }
    res = std::max(res, dp[i]);
  }
  printf("%d\n", n - res);
}
