#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;
int a, n, m, arr[301][21], dp[301][21], back[301][21];
stack<int> S;
//dp[i][j]:i원일때 A기업~j기업까지의 최대이익
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++){
    scanf("%d", &a);
    for(int j = 0;j < m;j++){
      scanf("%d", &arr[i][j]);
      if(!j) dp[i][j] = arr[i][j], back[i][j] = i;
    }
  }
  for(int i = 1;i <= n;i++){
    for(int j = 1;j < m;j++){
      int cur = i;
      while(cur > -1){
        if(dp[i][j] < dp[i - cur][j - 1] + arr[cur][j]){
          dp[i][j] =  dp[i - cur][j - 1] + arr[cur][j];
          back[i][j] = cur;
        }
        cur--;
      }
    }
  }
  int cur = n;
  for(int i = m - 1;i >= 0;i--){
    S.push(back[cur][i]);
    cur -= back[cur][i];
  }
  printf("%d\n", dp[n][m - 1]);
  while(!S.empty()){
    printf("%d ", S.top());
    S.pop();
  }
  printf("\n");
}
