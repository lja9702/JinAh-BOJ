#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
vector<pair<int, int> > adj[100001];
int n, ener[100001], depth[100001];
int dist[100001], parent[100001][20];
void dfs(int here){
  for(int i = 0;i < adj[here].size();i++){
    int next = adj[here][i].first, d = adj[here][i].second;
    if(depth[next] == -1){
      depth[next] = depth[here] + 1;
      dist[next] = dist[here] + d;
      parent[next][0] = here;
      dfs(next);
    }
  }
}
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++)
    scanf("%d", &ener[i]);
  for(int i = 0;i < n - 1;i++){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    adj[a].push_back({b, c}), adj[b].push_back({a, c});
  }
  memset(parent, -1, sizeof(parent));
  memset(depth, -1, sizeof(depth));
  depth[1] = 0;
  dfs(1);
  for(int j = 0;j < 20;j++){
    for(int i = 1;i <= n;i++){
      if(parent[i][j] != -1)
        parent[i][j + 1] = parent[parent[i][j]][j];
    }
  }
  printf("1\n");
  for(int i = 2;i <= n;i++){
    int cur = 19, here = i, res = 0;
    while(here != 1 && cur >= 0){
      if(parent[here][cur] != -1 && parent[here][cur] != 1){
        if(dist[i] - dist[parent[here][cur]] <= ener[i])
          here = parent[here][cur];
      }
      cur--;
    }
    if(dist[i] - dist[parent[here][cur]] <= ener[i])  here = parent[here][0];
    printf("%d\n", here);
  }
}
