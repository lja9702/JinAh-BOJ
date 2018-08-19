#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int n, m, arr[1001][1001], res = 1 << 29;
bool check[1001][1001][2];
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
queue <pair <int, int> > Q, go; //go: cnt와 벽을 1번 이하로 뿌셨는지
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++){
    char str[1100] = {0};
    scanf(" %s", str);
    for(int j = 0;j < m;j++)
      arr[i][j + 1] = str[j] - '0';
  }
  Q.push({1, 1}), go.push({1, 0});
  check[1][1][0] = 1;
  while(!Q.empty() && !go.empty()){
    int x = Q.front().first, y = Q.front().second;
    int cnt = go.front().first, br = go.front().second;
    Q.pop(), go.pop();
    if(x == n && y == m){
      res = min(res, cnt);
      continue;
    }
    for(int i = 0;i < 4;i++){
      int tx = x + dist[i][0], ty = y + dist[i][1];
      if(tx >= 1 && tx <= n && ty >= 1 && ty <= m && !check[tx][ty][br]){
        if(arr[tx][ty] && !br){
          Q.push({tx, ty}), go.push({cnt + 1, br + 1});
          check[tx][ty][br + 1] = 1;
        }
        else if(!arr[tx][ty]){
          Q.push({tx, ty}), go.push({cnt + 1, br});
          check[tx][ty][br] = 1;
        }
      }
    }
  }
  if(res == 1 << 29)  printf("-1\n");
  else printf("%d\n", res);
}
