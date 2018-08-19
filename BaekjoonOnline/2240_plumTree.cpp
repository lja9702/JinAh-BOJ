#include <cstdio>
#include <algorithm>
using namespace std;
int dp[1001][3][33], t, w;
int arr[1001];
int main(){
  scanf("%d %d", &t, &w);
  for(int i = 1;i <= t;i++)
    scanf("%d", &arr[i]);
  if(arr[1] == 1) dp[1][1][0] = 1;
  else  dp[1][2][1] = 1;
  for(int i = 1;i <= t;i++){
    for(int j = 0;j <= std::min(i, w);j++){
      if(arr[i] == 1){
        dp[i][1][j] = max(dp[i][1][j], dp[i - 1][1][j] + 1);
        dp[i][1][j + 1] = max(dp[i][1][j + 1], dp[i - 1][2][j] + 1);
        dp[i][2][j] = max(dp[i][2][j], dp[i - 1][2][j]);
      }
      else{
        dp[i][2][j] = max(dp[i][2][j], dp[i - 1][2][j] + 1);
        dp[i][2][j + 1] = max(dp[i][2][j + 1], dp[i - 1][1][j] + 1);
        dp[i][1][j] = max(dp[i][1][j], dp[i - 1][1][j]);
      }
    }
  }
  int res = 0;
  for(int i = 0;i <= w;i++)
    res = max(res, max(dp[t][2][i], dp[t][1][i]));
  printf("%d\n", res);
}
