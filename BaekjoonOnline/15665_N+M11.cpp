#include <cstdio>
#include <algorithm>
int n, m, a, tot, check[10001], num[10], res[10];
void dfs(int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = 0;i < tot;i++){
    res[cnt] = num[i];
    dfs(cnt + 1);
  }
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++){
    scanf("%d", &a);
    if(!check[a]){
      num[tot] = a;
      tot++;
    }
    check[a]++;
  }
  std::sort(num, num + tot);
  dfs(0);
}
