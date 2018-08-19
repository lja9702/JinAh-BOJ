#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
struct a{
  int x, y, cnt;
};
bool operator < (a t, a u){
  return t.cnt > u.cnt;
}
int n, m, check[101][101], dist[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
char arr[101][101];
priority_queue <a> pq;
int main(){
  scanf("%d %d", &m, &n);
  for(int i = 0;i < n;i++)  scanf(" %s", arr[i]);
  check[0][0] = 1;
  a temp; temp.x = 0, temp.y = 0, temp.cnt = 0;
  pq.push(temp);
  while(!pq.empty()){
    int x = pq.top().x, y = pq.top().y, cnt = pq.top().cnt;
    pq.pop();
    if(x == n - 1 && y == m - 1){
      printf("%d\n", cnt);
      return 0;
    }
    for(int i = 0;i < 4;i++){
      int tx = x + dist[i][0], ty = y + dist[i][1];
      if(tx >= 0 && tx < n && ty >= 0 && ty < m && !check[tx][ty]){
        a temp; temp.x = tx, temp.y = ty;
        if(arr[tx][ty] == '0')  temp.cnt = cnt;
        else  temp.cnt = cnt + 1;
        check[tx][ty] = 1;
        pq.push(temp);
      }
    }
  }
}
