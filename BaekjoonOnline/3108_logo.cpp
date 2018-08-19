#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> adj[1001];
int n, arr[1001][4], cnt;
bool vist[1001], fl = 0;
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++){
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if(x1 > x2) swap(x1, x2);
    if(y1 > y2) swap(y1, y2);
    arr[i][0] = x1, arr[i][1] = y1, arr[i][2] = x2, arr[i][3] = y2;
    for(int j = 0;j < i;j++){
      int tx1 = arr[j][0], ty1 = arr[j][1], tx2 = arr[j][2], ty2 = arr[j][3];
      if((x1 > tx1 && y1 > ty1 && x2 < tx2 && y2 < ty2) ||
      (x1 < tx1 && y1 < ty1 && x2 > tx2 && y2 > ty2) ||
      x2 < tx1 || x1 > tx2 || y2 < ty1 || y1 > ty2)
        continue;
      adj[i].push_back(j), adj[j].push_back(i);
    }
    if(((x1 == 0 || x2 == 0) && y1 <= 0 && 0 <= y2)
    || ((y1 == 0 || y2 == 0) && x1 <= 0 && 0 <= x2)){
      fl = 1;
    }
  }
  queue<int> Q;
  for(int i = 0;i < n;i++){
    if(!vist[i]){
      Q.push(i); vist[i] = 1;
      while(!Q.empty()){
        int here = Q.front();
        Q.pop();
        for(int j = 0;j < adj[here].size();j++){
          int next = adj[here][j];
          if(!vist[next]){
            Q.push(next); vist[next] = 1;
          }
        }
      }
      cnt++;
    }
  }
  if(fl)  cnt--;
  printf("%d\n", cnt);
}
