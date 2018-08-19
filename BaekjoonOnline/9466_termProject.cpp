#include <cstdio>
#include <cstring>
int t, n, arr[100001], cnt;
bool fin[100001], vist[100001];

void dfs(int st){
  vist[st] = 1;
  int next = arr[st];
  if(vist[next]){
    if(!fin[next]){
      for(int i = next;i != st;i = arr[i])  cnt++;
      cnt++;
    }
  }
  else dfs(next);
  fin[st] = 1;
}
int main(){
  scanf("%d", &t);
  while(t--){
    cnt = 0;
    memset(fin, 0, sizeof(fin));
    memset(arr, 0, sizeof(arr));
    memset(vist, 0, sizeof(vist));
    scanf("%d", &n);
    for(int i = 1;i <= n;i++) scanf("%d", &arr[i]);
    for(int i = 1;i <= n;i++)
      if(!vist[i])  dfs(i);
    printf("%d\n", n - cnt);
  }
}
