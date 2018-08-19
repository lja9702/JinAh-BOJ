#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int n, m, depth[50001], parent[50001][17];
vector<int> adj[50001];
void dfs(int here){
  for(int i = 0;i < adj[here].size();i++){
    int next = adj[here][i];
    if(depth[next] == -1){
      parent[next][0] = here;
      depth[next] = depth[here] + 1;
      dfs(next);
    }
  }
}
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n - 1;i++){
    int a, b;
    scanf("%d %d", &a, &b);
    adj[a].push_back(b), adj[b].push_back(a);
  }
  memset(parent, -1, sizeof(parent));
  memset(depth, -1, sizeof(depth));
  depth[1] = 0;
  dfs(1);
  for(int j = 0;j < 17;j++){
    for(int i = 1;i <= n;i++){
      if(parent[i][j] != -1)
        parent[i][j + 1] = parent[parent[i][j]][j];
    }
  }
  scanf("%d", &m);
  while(m--){
    int u, v;
    scanf("%d %d", &u, &v);
    if(depth[u] < depth[v]) swap(u, v);
    int gap = depth[u] - depth[v];
    for(int i = 0;gap;i++){
      if(gap % 2) u = parent[u][i];
      gap /= 2;
    }
    int cur = 16;
    while(u != v && cur >= 0){
      if(parent[u][cur] != -1 && parent[u][cur] != parent[v][cur])
        u = parent[u][cur], v = parent[v][cur];
      cur--;
    }
    if(u != v)  u = parent[u][0];
    printf("%d\n", u);
  }
}
