#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
queue<int> Q;
bool vist[1001];
vector<int> list[1001];
int main(){
  int a, b, n, m, cnt = 0;
  scanf("%d %d", &n, &m);
  for(int i = 0;i < m;i++){
    scanf("%d %d", &a, &b);
    list[a].push_back(b), list[b].push_back(a);
  }
  for(int i = 1;i <= n;i++){
    if(!vist[i]){
      Q.push(i), vist[i] = 1, cnt++;
      while(!Q.empty()){
        int fr = Q.front();
        Q.pop();
        for(int j = 0;j < list[fr].size();j++){
          if(!vist[list[fr][j]])
            Q.push(list[fr][j]), vist[list[fr][j]] = 1;
        }
      }
    }
  }
  printf("%d\n", cnt);
}
