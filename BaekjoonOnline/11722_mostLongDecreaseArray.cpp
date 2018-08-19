#include <cstdio>
#include <algorithm>
int n, arr[1001], dp[1001], res;
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++){
    scanf("%d", &arr[i]); dp[i] = 1;
  }
  for(int i = 1;i <= n;i++){
    int max = 0;
    for(int j = 1;j < i;j++){
      if(dp[max] < dp[j] && arr[i] < arr[j]) max = j;
    }
    dp[i] += dp[max];
    res = std::max(res, dp[i]);
  }
  printf("%d\n", res);
}
