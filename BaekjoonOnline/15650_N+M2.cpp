#include <cstdio>
int m, n, res[10];
void dfs(int st, int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
  }
  for(int i = st + 1;i <= n;i++){
    res[cnt] = i;
    dfs(i, cnt + 1);
  }
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  dfs(0, 0);
}
