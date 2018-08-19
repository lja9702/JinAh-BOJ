#include <cstdio>
#include <algorithm>
int a, tot = 0, n, m, num[10], check[10001], res[10], temp[10001];
void dfs(int st, int cnt){
  if(m == cnt){
    for(int i = 0;i < cnt;i++)
      printf("%d ", res[i]);
    printf("\n");
    return ;
  }
  for(int i = st;i < tot;i++){
    if(temp[num[i]] < check[num[i]]){
      res[cnt] = num[i], temp[num[i]]++;
      dfs(i, cnt + 1);
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
  dfs(0, 0);
}
