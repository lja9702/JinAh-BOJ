#include <cstdio>
#include <algorithm>
int n, m, num[10], res[10], check[10001];
void dfs(int st, int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = 0;i < n;i++){
    if(!check[num[i]]){
      check[num[i]] = 1, res[cnt] = num[i];
      dfs(i, cnt + 1);
      check[num[i]] = 0;
    }
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
