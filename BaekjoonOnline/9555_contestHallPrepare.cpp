#include <cstdio>
#include <cstring>
int t, n, m, arr[101][101];
int dist[8][2] = {{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}};
int main(){
  scanf("%d", &t);
  while(t--){
    int cnt = 0;
    bool check[101] = {0};
    memset(arr, 0, sizeof(arr));
    scanf("%d %d", &n, &m);
    for(int i = 0;i < n;i++){
      for(int j = 0;j < m;j++){
        scanf("%d", &arr[i][j]);
      }
    }
    for(int i = 0;i < n;i++){
      for(int j = 0;j < m;j++){
        if(arr[i][j] != -1){
          for(int p = 0;p < 8;p++){
            int tx = i + dist[p][0], ty = j + dist[p][1];
            if(tx >= 0 && tx < n && ty >= 0 && ty < m && arr[tx][ty] != -1 && arr[tx][ty] == arr[i][j]){
                check[arr[i][j]] = 1;
                break;
            }
          }
        }
      }
    }
    for(int i = 1;i <= 100;i++){
      if(check[i])  cnt++;
    }
    printf("%d\n", cnt);
  }
}
