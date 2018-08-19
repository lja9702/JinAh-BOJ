#include <cstdio>
int n, m, res[10];
void dfs(int st, int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = st;i <= n;i++){
    if(!i) continue;
    res[cnt] = i;
    dfs(i, cnt + 1);
  }
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  dfs(0, 0);
}
