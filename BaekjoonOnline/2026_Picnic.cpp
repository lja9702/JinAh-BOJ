#include <cstdio>
#include <vector>
using namespace std;
int k, n, f, adj[901][901];
vector<int> res;
bool dfs(int here, int cnt){
  res.push_back(here);
  if(cnt == k)  return 1;
  for(int i = here + 1;i <= n;i++){
    bool flag = 1;
    if(adj[here][i]){
      for(int j = 0;j < res.size();j++)
        if(!adj[i][res[j]]) flag = 0;
      if(flag && dfs(i, cnt + 1))
        return 1;
    }
  }
  res.pop_back();
  return 0;
}

int main(){
  scanf("%d %d %d", &k ,&n, &f);
  while(f--){
    int a, b;
    scanf("%d %d", &a, &b);
    adj[a][b] = 1, adj[b][a] = 1;
  }
  for(int i = 1;i <= n;i++){
    if(dfs(i, 1)){
      for(int i = 0;i < res.size();i++)
        printf("%d\n", res[i]);
      return 0;
    }
  }
  printf("-1\n");
}
