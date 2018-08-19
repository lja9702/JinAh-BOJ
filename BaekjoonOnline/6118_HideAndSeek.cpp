#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int n, m, a, b, cost[20001], cnt[20001], res = 0;
vector<int> v[20001];
int main(){
  queue<int> Q;
  scanf("%d %d", &n, &m);
  for(int i = 0;i < m;i++){
    scanf("%d %d", &a, &b);
    v[a].push_back(b), v[b].push_back(a);
  }
  for(int i = 2;i <= n;i++) cost[i] = 1 << 29;
  Q.push(1);
  while(!Q.empty()){
    int here = Q.front();
    Q.pop();
    for(int i = 0;i < v[here].size();i++){
      int next = v[here][i];
      if(cost[next] > cost[here] + 1){
        cost[next] = cost[here] + 1;
        Q.push(next);
      }
    }
  }
  for(int i = 2;i <= n;i++){
    cnt[cost[i]]++;
    if(cost[res] < cost[i]) res = i;
  }
  printf("%d %d %d\n", res, cost[res], cnt[cost[res]]);
}
