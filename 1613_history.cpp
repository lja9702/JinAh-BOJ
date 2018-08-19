#include <cstdio>
#include <queue>
using namespace std;
vector<int> adj[401];
int n;
bool bfs(int st, int end){
  bool vist[401] = {0};
  queue<int> Q;
  vist[st] = 1;
  for(int i = 0;i < adj[st].size();i++){
    Q.push(adj[st][i]), vist[adj[st][i]] = 1;
  }
  while(!Q.empty()){
    int fr = Q.front(); Q.pop();
    if(fr == end) return 1;
    for(int i = 0;i < adj[fr].size();i++){
      if(adj[fr][i] && !vist[adj[fr][i]])  Q.push(adj[fr][i]), vist[adj[fr][i]] = 1;
    }
  }
  return 0;
}
int main(){
  int k, a, b, s;
  scanf("%d %d", &n, &k);
  while(k--){
    scanf("%d %d", &a, &b);
    adj[a].push_back(b);
  }
  scanf("%d", &s);
  while(s--){
    scanf("%d %d", &a, &b);
    if(bfs(a, b)) printf("-1\n");
    else if(bfs(b, a))  printf("1\n");
    else  printf("0\n");
  }
}
