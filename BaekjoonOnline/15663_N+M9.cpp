#include <cstdio>
#include <algorithm>
int a, n, m, num[10], tot, res[10], check[10001], temp[10001];
void dfs(int cnt){
  if(cnt == m){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = 0;i < tot;i++){
    if(temp[num[i]] < check[num[i]]){
      res[cnt] = num[i];
      temp[num[i]]++;
      dfs(cnt + 1);
      temp[num[i]]--;
    }
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
