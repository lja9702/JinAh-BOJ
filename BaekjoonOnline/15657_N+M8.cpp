#include <cstdio>
#include <algorithm>
int n, m, num[10], res[10];
void dfs(int st, int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = st;i < n;i++){
    res[cnt] = num[i];
    dfs(i, cnt + 1);
  }
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++)
    scanf("%d", &num[i]);
  std::sort(num, num + n);
  dfs(0, 0);
}
