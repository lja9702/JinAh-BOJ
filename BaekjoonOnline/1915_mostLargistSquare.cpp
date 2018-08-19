#include <cstdio>
#include <algorithm>
int n, m, res, arr[1001][1001], dp[1001][1001];
int dist[3][2] = {{0, -1}, {-1, -1}, {-1, 0}};
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++){
    char temp[1002];
    scanf(" %s", temp);
    for(int j = 0;j < m;j++)
      arr[i][j] = temp[j] - '0';
  }
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      if(arr[i][j]){
        int minn = 1 << 29;
        bool fl = 0;
        for(int k = 0;k < 3;k++){
          int tx = i + dist[k][0], ty = j + dist[k][1];
          if(!arr[tx][ty])  fl = 1;
          minn = std::min(dp[tx][ty], minn);
        }
        if(fl)  dp[i][j] = 1;
        else  dp[i][j] = minn + 1;
      }
      res = std::max(res, dp[i][j]);
    }
  }
  printf("%d\n", res * res);
}
