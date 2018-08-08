#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> Amatch, Bmatch, res;
vector<bool> visited;
bool prime[2001], adj[51][51];
int n, anum = 0, bnum = 0, cnt = 0, fin = 0;
void primeCheck(){
  prime[0] = 1, prime[1] = 1;
  for(int i = 2;i * i <= 2000;i++){
    if(!prime[i]){
      for(int j = i * 2;j <= 2000;j+=i)
        prime[j] = 1;
    }
  }
}
bool dfs(int a){
  if(visited[a])  return 0;
  visited[a] = 1;
  for(int b = 0;b < bnum;b++){
    if(adj[a][b] && (Bmatch[b] == -1 || dfs(Bmatch[b]))){
      Amatch[a] = b, Bmatch[b] = a;
      return 1;
    }
  }
  return 0;
}
int main(){
  int t, n, a[51] = {0}, b[51] = {0};
  scanf("%d", &n);
  bool flag = 0;
  for(int i = 0;i < n;i++){
    bool temp = 0;
    scanf("%d", &t);
    if(i == 0 && t % 2) flag = 1;
    if(t % 2) temp = 1;
    if(flag != temp) b[bnum++] = t;
    else  a[anum++] = t;
  }
  if(anum != bnum){
    printf("-1\n");
    return 0;
  }
  primeCheck();
  int first[51] = {0};
  for(int i = 0;i < anum;i++){
    for(int j = 0;j < bnum;j++){
      if(!prime[a[i] + b[j]])
        adj[i][j] = 1;
    }
  }
  for(int i = 0;i < bnum;i++){
    if(adj[0][i]){
      Amatch = vector <int> (n + 1, -1);
      Bmatch = vector <int> (n + 1, -1);
      int size = 0;
      Amatch[0] = i, Bmatch[i] = 0;
      for(int st = 1;st < anum;st++){
        visited = vector<bool>(n + 1, 0);
        visited[0] = 1;
        if(dfs(st)) size++;
      }
      if(size == anum - 1)
        res.push_back(b[Amatch[0]]);
    }
  }
  if(!res.size())
    printf("-1\n");
  else{
    sort(res.begin(), res.end());
    for(int i = 0;i < res.size();i++)
      printf("%d ", res[i]);
    printf("\n");
  }
}
