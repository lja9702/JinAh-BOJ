#include <cstdio>
#include <algorithm>
int a, dp[101][10001], n, k, money[101];
//j원일때 i번째 동전까지 사용한 경우의 수
int main(){
  scanf("%d %d", &n, &k);
  for(int i = 0;i < n;i++)
    scanf("%d", &money[i]);
  std::sort(money, money + n);
  for(int i = 0;i < n;i++){
    for(int j = money[i];j <= k;j += money[i])
      dp[i][j]++;
    for(int j = 0;j < i;j++)
        dp[i][money[i] + money[j]] += dp[j][money[j]];
  }
  printf("%d\n", dp[n - 1][k]);
}
