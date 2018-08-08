#include <cstdio>
int m, n, arr[501][501], dp[501][501][4];
int dist[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
int main(){
  scanf("%d %d", &m, &n);
  for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++)
      scanf("%d", &arr[i][j]);
  }
  dp[0][0] = 1;
  for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
      for(int k = 0;k < 4;k++){
        int tx = i + dist[k][0], ty = j + dist[k][1];
        if(tx >= 0 && tx < m && ty >= 0 && ty < n && arr[tx][ty] > arr[i][j]){
          dp[i][j] += dp[tx][ty];
        }
      }
    }
  }
  for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
      printf("%d ", dp[i][j]);
    }
    printf("\n");
  }
  printf("%d\n", dp[m - 1][n - 1]);
}
