#include <cstdio>
int n, m, res[10];
void dfs(int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = 1;i <= n;i++){
    res[cnt] = i;
    dfs(cnt + 1);
  }
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  dfs(0);
}
