#include <cstdio>
#include <algorithm>
int n, maxx = 0, dist[2][2] = {{1, 0}, {0, 1}};
char arr[51][51];
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)
    scanf(" %s", arr[i]);
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      for(int k = 0;k < 2;k++){
        int tx = i + dist[k][0], ty = j + dist[k][1];
        if(tx >= 0 && tx < n && ty >= 0 && ty < n){
          std::swap(arr[i][j], arr[tx][ty]);
          for(int p = 0;p < n;p++){
            for(int q = 0;q < n;q++){
              int x = p + 1, y = q;
              while(arr[x][y] == arr[p][q] && x < n) x++;
              maxx = std::max(maxx, x - p);
              x = p, y = q + 1;
              while(arr[x][y] == arr[p][q] && y < n) y++;
              maxx = std::max(maxx, y - q);
            }
          }
          std::swap(arr[i][j], arr[tx][ty]);
        }
      }
    }
  }
  printf("%d\n", maxx);
}
