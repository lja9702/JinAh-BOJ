#include <cstdio>
#include <cstring>
int n, m, res[10], check[10];
void dfs(int now, int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = 1;i <= n;i++){
    if(!check[i]){
      res[cnt] = i;
      check[i]++;
      dfs(i, cnt + 1);
      check[i] = 0;
    }
  }
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  dfs(0, 0);
}
