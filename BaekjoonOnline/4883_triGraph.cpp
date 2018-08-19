#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int arr[100001][3],dp[100001][3], n, cnt;
int dist[4][2] = {{0, 1}, {1, -1}, {1, 0}, {1, 1}};
int main(){
  while(~scanf("%d", &n)){
    cnt++;
    if(!n)  return 0;
    memset(arr, 0, sizeof(arr));
    memset(dp, 0, sizeof(dp));
    for(int i = 0;i < n;i++){
      for(int j = 0;j < 3;j++){
        scanf("%d", &arr[i][j]);
        if(i != 0)  dp[i][j] = 1 << 29;
        else  dp[i][j] = arr[i][j];
      }
    }
    dp[0][0] = 1 << 29, dp[0][2] += dp[0][1];
    for(int i = 0;i < n;i++){
      for(int j = 0;j < 3;j++){
        for(int k = 0;k < 4;k++){
          int x = i + dist[k][0], y = j + dist[k][1];
          if(x < n && y < 3 && x >= 0 && y >= 0)
            dp[x][y] = min(dp[x][y], dp[i][j] + arr[x][y]);
        }
      }
    }
    printf("%d. %d\n", cnt, dp[n - 1][1]);
  }
}
