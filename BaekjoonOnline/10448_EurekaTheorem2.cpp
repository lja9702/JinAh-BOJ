#include <cstdio>
int t, n, arr[47], sum;
bool fl;
void dfs(int st, int cnt){
  if(cnt == 3 && sum == n){
    fl = 1;
    return ;
  }
  for(int i = st;i < 47;i++){
    sum += arr[i];
    if(sum <= n && cnt < 3)
      dfs(i, cnt + 1);
    sum -= arr[i];
  }
  return ;
}
int main(){
  scanf("%d", &t);
  for(int i = 1;i < 47;i++)
    arr[i] = i * (i + 1) / 2;
  while(t--){
    fl = 0;
    scanf("%d", &n);
    dfs(1, 0);
    if(fl)  printf("1\n");
    else  printf("0\n");
  }
}
