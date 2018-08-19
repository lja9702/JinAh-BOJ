#include <cstdio>
#include <algorithm>
int n, num[12], oper[4], maxx = -(1 << 30), minn = 1 << 30;
void dfs(int cnt, int sum){
  if(cnt == n){
    maxx = std::max(maxx, sum);
    minn = std::min(minn, sum);
    return;
  }
  for(int i = 0;i < 4;i++){
    if(oper[i]){
      oper[i]--;
      if(i == 0)  dfs(cnt + 1, sum + num[cnt]);
      else if(i == 1) dfs(cnt + 1, sum - num[cnt]);
      else if(i == 2) dfs(cnt + 1, sum * num[cnt]);
      else  dfs(cnt + 1, sum / num[cnt]);
      oper[i]++;
    }
  }
  return ;
}
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)  scanf("%d", &num[i]);
  for(int i = 0;i < 4;i++)  scanf("%d", &oper[i]);
  dfs(1, num[0]);
  printf("%d\n%d\n", maxx, minn);
}
