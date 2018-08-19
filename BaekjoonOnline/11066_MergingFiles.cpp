#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int t, dp[502][502] = {0}, n;
int main(){
  scanf("%d", &t);
  while(t--){
    int sum[501] = {0};
    memset(dp, 0, sizeof(dp));
    scanf("%d", &n);
    for(int i = 1;i <= n;i++){
      scanf("%d", &sum[i]);
      sum[i] += sum[i - 1];
    }
    for(int diag = 0;diag < n;diag++){
      for(int i = 1;i <= n - diag;i++){
        int j = i + diag;
        if(i == j)  dp[i][j] = 0;
        else{
          dp[i][j] = 1 << 29;
          for(int k = i;k < j;k++)
            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + sum[j] - sum[i - 1]);
        }
      }
    }
    printf("%d\n", dp[1][n]);
  }
}
