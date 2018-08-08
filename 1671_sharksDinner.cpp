#include <cstdio>
#include <vector>
using namespace std;
bool adj[1001][1001];
int n, cnt = 0;
vector <int> matA, matB;
vector <bool> vist;
struct node{
  int size, fast, brain;
};
node N[1001];
bool dfs(int a){
  if(vist[a]) return 0;
  vist[a] = 1;
  for(int b = 1;b <= n;b++){
    if(adj[a][b] && (matB[b] == -1 || dfs(matB[b]))){
      matA[a] = b, matB[b] = a;
      return 1;
    }
  }
  return 0;
}
int main(){
  scanf("%d", &n);
  matA = vector<int>(n + 1, -1);
  matB = vector<int> (n + 1, -1);
  for(int i = 1;i <= n;i++)
    scanf("%d %d %d", &N[i].size, &N[i].fast, &N[i].brain);
  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= n;j++){
      if(!adj[j][i] && i != j && N[i].size >= N[j].size && N[i].fast >= N[j].fast && N[i].brain >= N[j].brain)
        adj[i][j] = 1;
    }
  }
  for(int st = 1;st <= n;st++){
    for(int i = 0;i < 2;i++){
      vist = vector<bool> (n + 1, 0);
      if(dfs(st)) cnt++;
    }
  }
  printf("%d\n", n - cnt);
}
