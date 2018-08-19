#include <cstdio>
#include <queue>
using namespace std;
int arr[1001][1001], path[1001][1001], n, m;
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool check[1001][1001];
queue <pair<int, int> > Q;
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      scanf("%d", &arr[i][j]);
      path[i][j] = -1;
      if(!arr[i][j])  path[i][j] = 0;
      else if(arr[i][j] == 2){
        path[i][j] = 0;
        Q.push({i, j}); check[i][j] = 1;
      }
    }
  }
  while(!Q.empty()){
    int x = Q.front().first, y = Q.front().second;
    Q.pop();
    for(int i = 0;i < 4;i++){
      int tx = x + dist[i][0], ty = y + dist[i][1];
      if(tx >= 0 && tx < n && ty >= 0 && ty < m && arr[tx][ty] && !check[tx][ty]){
        Q.push({tx, ty}); check[tx][ty] = 1;
        path[tx][ty] = path[x][y] + 1;
      }
    }
  }
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++)
      printf("%d ", path[i][j]);
    printf("\n");
  }
}
