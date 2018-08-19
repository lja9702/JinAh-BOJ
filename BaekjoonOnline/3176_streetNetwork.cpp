#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int n, k, depth[100001], parent[100001][20];
int minn[100001][20], maxx[100001][20];
vector<pair<int, int> > adj[100001];
void dfs(int here){
  for(int i = 0;i < adj[here].size();i++){
    int next = adj[here][i].first, d = adj[here][i].second;
    if(depth[next] == -1){
      depth[next] = depth[here] + 1;
      parent[next][0] = here;
      minn[next][0] = d, maxx[next][0] = d;
      dfs(next);
    }
  }
}
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n - 1;i++){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    adj[a].push_back({b, c}), adj[b].push_back({a, c});
  }
  memset(depth, -1, sizeof(depth));
  memset(parent, -1, sizeof(parent));
  depth[1] = 0;
  dfs(1);
  for(int j = 0;j < 20;j++){
    for(int i = 1;i <= n;i++){
      if(parent[i][j] != -1){
        parent[i][j + 1] = parent[parent[i][j]][j];
        minn[i][j + 1] = min(minn[i][j], minn[parent[i][j]][j]);
        maxx[i][j + 1] = max(maxx[i][j], maxx[parent[i][j]][j]);
      }
    }
  }
  scanf("%d", &k);
  while(k--){
    int d, e;
    scanf("%d %d", &d, &e);
    if(depth[d] < depth[e]) swap(d, e);
    int gap = depth[d] - depth[e];
    int rmax = 0, rmin = 1 << 29;
    for(int i = 0;gap;i++){
      if(gap % 2){
        rmax = max(rmax, maxx[d][i]);
        rmin = min(rmin, minn[d][i]);
        d = parent[d][i];
      }
      gap /= 2;
    }
    int cur = 19;
    while(d != e && cur >= 0){
      if(parent[d][cur] != -1 && parent[d][cur] != parent[e][cur]){
        rmax = max(rmax, max(maxx[d][cur], maxx[e][cur]));
        rmin = min(rmin, min(minn[d][cur], minn[e][cur]));
        d = parent[d][cur], e = parent[e][cur];
      }
      cur--;
    }
    if(d != e){
      rmax = max(rmax, max(maxx[d][0], maxx[e][0]));
      rmin = min(rmin, min(minn[d][0], minn[e][0]));
      d = parent[d][0];
    }
    printf("%d %d\n", rmin, rmax);
  }
}
