#include <cstdio>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;
vector <pair<int, int> > V;
vector <pair<int, int> > adj[4003];
int dista[4003], n;
bool prime[13001];
void primeNumber(){
  prime[1] = 1;
  for(int i = 2;i * i <= 13000;i++){
    if(!prime[i]){
      for(int j = i * 2;j <= 13000;j+=i)
        prime[j] = 1;
    }
  }
}
void dijk(int st, int end){
  queue <int> q;
  for(int i = 1;i < n + 2;i++)  dista[i] = 1 << 30;
  q.push(st);
  while(!q.empty()){
    int pos = q.front();
    q.pop();
    for(int i = 0;i < adj[pos].size();i++){
      int next = adj[pos][i].first, dist = adj[pos][i].second;
      if(dista[next] > dista[pos] + dist){
        dista[next] = dista[pos] + dist;
        q.push(next);
      }
    }
  }
  if(dista[end] == 1 << 30) printf("-1\n");
  else  printf("%d\n", dista[end]);
}
int main(){
  int x1, y1, x2, y2, x, y;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  scanf("%d", &n);
  V.push_back(make_pair(x1, y1));
  V.push_back(make_pair(x2, y2));
  for(int i = 0;i < n;i++){
    scanf("%d %d", &x, &y);
    V.push_back(make_pair(x, y));
  }
  primeNumber();
  for(int i = 0;i < V.size();i++){
    int tx1 = V[i].first, ty1 = V[i].second;
    for(int j = 0;j < V.size() - 1;j++){
      int tx2 = V[j].first, ty2 = V[j].second;
      int dist = (int)sqrt((tx1 - tx2) * (tx1 - tx2) + (ty1 - ty2) * (ty1 - ty2));
      if(!prime[dist]){
        adj[i].push_back(make_pair(j, dist));
        adj[j].push_back(make_pair(i, dist));
      }
    }
  }
  dijk(0, 1);
}
