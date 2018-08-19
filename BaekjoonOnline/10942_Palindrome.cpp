#include <cstdio>
int n, arr[2001], m, dp[2010][2010];
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++){
    scanf("%d", &arr[i]);
    dp[i][i] = 1;
  }
  for(int i = 1;i < n;i++){
    if(arr[i] == arr[i + 1])  dp[i][i + 1] = 1;
  }
  for(int k = 2;k < n;k++){
    for(int i = 1;i <= n - k;i++){
      if(arr[i] == arr[i + k] && dp[i + 1][i + k - 1])  dp[i][i + k] = 1;
    }
  }
  scanf("%d", &m);
  while(m--){
    int s, e;
    scanf("%d %d", &s, &e);
    printf("%d\n", dp[s][e]);
  }
}
