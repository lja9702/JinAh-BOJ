#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n, x = 1, res;
bool check[10010];
vector <pair<int, int> > v[10010];
void dfs(int here){
  for(int i = 0;i < ;)
}
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    v[a].push_back({b, c}), v[b].push_back({a, c});
  }
  x = dfs(x);
}
