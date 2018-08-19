#include <cstdio>
#include <algorithm>
int adj[101][101], item[101], n, m, r, res;
int main(){
  scanf("%d %d %d", &n, &m, &r);
  for(int i = 1;i <= n;i++) scanf("%d", &item[i]);
  for(int i = 1;i <= 100;i++){
    for(int j = 1;j <= 100;j++){
      if(i != j)  adj[i][j] = 1 << 29;
    }
  }
  while(r--){
    int a, b, l;
    scanf("%d %d %d", &a, &b, &l);
    adj[a][b] = l, adj[b][a] = l;
  }
  for(int k = 1;k <= n;k++){
    for(int i = 1;i <= n;i++){
      for(int j = 1;j <= n;j++)
        adj[i][j] = std::min(adj[i][j], adj[i][k] + adj[k][j]);
    }
  }
  for(int i = 1;i <= n;i++){
    int sum = 0;
    for(int j = 1;j <= n;j++){
      if(adj[i][j] > m) continue;
      sum += item[j];
    }
    res = std::max(sum, res);
  }
  printf("%d\n", res);
}
