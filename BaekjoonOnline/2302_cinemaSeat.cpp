#include <cstdio>
int dp[41], n, m, arr[41], res = 1;
int main(){
  dp[0] = 1, dp[1] = 1, dp[2] = 2;
  for(int i = 3;i <= 40;i++)  dp[i] = dp[i - 1] + dp[i - 2];
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= m;i++)  scanf("%d", &arr[i]);
  arr[m + 1] = n + 1;
  for(int i = 1;i <= m + 1;i++){
    int gap = arr[i] - arr[i - 1] - 1;
    res *= dp[gap];
  }
  printf("%d\n", res);
}
