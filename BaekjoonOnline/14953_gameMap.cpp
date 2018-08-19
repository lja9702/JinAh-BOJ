#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
struct node{
  int num, deg;
  bool operator < (node a){
    return this->deg < a.deg;
  }
};
node N[100001];
int n, m, nod[100001], dp[100001], deg[100001];
vector<int> v[100001];
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++)  dp[i] = 1;
  for(int i = 0;i < m;i++){
    int a, b;
    scanf("%d %d", &a, &b);
    v[a].push_back(b), v[b].push_back(a);
    deg[a]++, deg[b]++;
  }
  for(int i = 0;i < n;i++)  N[i].deg = deg[i], N[i].num = i;
  sort(N, N + n);
  for(int i = 0;i < n;i++)  nod[i] = N[i].num;
  for(int i = 0;i < n;i++){
    int here = nod[i];
    for(int j = 0;j < v[here].size();j++){
      int next = v[here][j];
      if(deg[here] > deg[next]){
        dp[here] = max(dp[here], dp[next] + 1);
      }
    }
  }
  int res = 0;
  for(int i = 0;i < n;i++)
    res = max(res, dp[i]);
  printf("%d\n", res);
}
