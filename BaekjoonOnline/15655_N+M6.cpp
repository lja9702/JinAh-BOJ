#include <cstdio>
#include <algorithm>
int n, m, num[10], res[10];
void dfs(int st, int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
  }
  for(int i = st + 1;i <= n;i++){
    res[cnt] = num[i];
    dfs(i, cnt + 1);
  }
}
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++)
    scanf("%d", &num[i]);
  std::sort(num + 1, num + n + 1);
  dfs(0, 0);
}
