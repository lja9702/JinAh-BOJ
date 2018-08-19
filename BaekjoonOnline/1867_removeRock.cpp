#include <cstdio>
#include <vector>
using namespace std;
int n, k, res;
vector<int> matA, matB, adj[501];
vector<bool> vist;
bool dfs(int a){
  if(vist[a])  return 0;
  vist[a] = 1;
  for(int i = 0;i < adj[a].size();i++){
    int b = adj[a][i];
    if(matB[b] == -1 || dfs(matB[b])){
      matA[a] = b, matB[b] = a;
      return 1;
    }
  }
  return 0;
}
int main(){
  scanf("%d %d", &n, &k);
  matA = vector<int> (n + 1, -1);
  matB = vector<int> (n + 1, -1);
  while(k--){
    int a, b;
    scanf("%d %d", &a, &b);
    adj[a].push_back(b);
  }
  for(int i = 1;i <= n;i++){
    vist = vector<bool> (n + 1, 0);
    if(dfs(i))  res++;
  }
  printf("%d\n", res);
}
