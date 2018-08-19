#include <cstdio>
#include <queue>
using namespace std;
char adj[101][101];
int n, cnt1 = 0, cnt2 = 0;
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool vist1[101][101], vist2[101][101];
void bfs(int x, int y, bool mode){
  bool go = 0;
  queue <pair<int, int> > Q;
  if(!mode) vist1[x][y] = 1;
  else vist2[x][y] = 1;
  char comp = adj[x][y];
  if(comp == 'R' || comp == 'G')  go = 1;
  Q.push(make_pair(x, y));
  while(!Q.empty()){
    int x = Q.front().first, y = Q.front().second;
    Q.pop();
    for(int i = 0;i < 4;i++){
      int tx = x + dist[i][0], ty = y + dist[i][1];
      if(tx >= 0 && tx < n && ty >= 0 && ty < n){
        if(!mode && adj[tx][ty] == comp && !vist1[tx][ty])
          Q.push(make_pair(tx, ty)), vist1[tx][ty] = 1;
        else if(mode && go && !vist2[tx][ty] && (adj[tx][ty] == 'R' || adj[tx][ty] == 'G'))
          Q.push(make_pair(tx, ty)), vist2[tx][ty] = 1;
        else if(mode && !go && !vist2[tx][ty] && adj[tx][ty] == comp)
          Q.push(make_pair(tx, ty)), vist2[tx][ty] = 1;
      }
    }
  }
}
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)
    scanf("%s", adj[i]);
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      if(!vist1[i][j]) bfs(i, j, 0), cnt1++;
      if(!vist2[i][j])  bfs(i, j, 1), cnt2++;
    }
  }
  printf("%d %d\n", cnt1, cnt2);
}
