#include <cstdio>
using namespace std;
int n, arr[101][101];
long long dp[101][101], res;
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++)
      scanf("%d", &arr[i][j]);
  }
  dp[0 + arr[0][0]][0] = 1, dp[0][0 + arr[0][0]] = 1;
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      if(i == n - 1 && j == n - 1)  continue;
      if(dp[i][j]){
        if(i + arr[i][j] < n) dp[i + arr[i][j]][j] += dp[i][j];
        if(j + arr[i][j] < n) dp[i][j + arr[i][j]] += dp[i][j];
      }
    }
  }
  printf("%lld\n", dp[n - 1][n - 1]);
}
