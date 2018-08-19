#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, int> mp;
typedef pair<mp, int> mmp;
int flag = 0, n, m, res, dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
char arr[51][51];
bool vist[51][51];
void bfs(int p, int q){
  queue<pair<pair<int, int>, int> > Q;
  Q.push(mmp(mp(p, q), 0)), vist[p][q] = 1;
  while(!Q.empty()){
    int x = Q.front().first.first, y = Q.front().first.second, cnt = Q.front().second;
    if(cnt > res) res = cnt;
    Q.pop();
    for(int i = 0;i < 4;i++){
      int tx = x + dist[i][0], ty = y + dist[i][1];
      if(tx >= 0 && tx < n && ty >= 0 && ty < m && arr[tx][ty] == 'L' && !vist[tx][ty])
        Q.push(mmp(mp(tx, ty), cnt + 1)), vist[tx][ty] = 1;
    }
  }
}
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++)
    scanf(" %s", arr[i]);
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      if(arr[i][j] == 'L'){
        memset(vist, 0, sizeof(vist));
        bfs(i, j);
      }
    }
  }
  printf("%d\n", res);
}
