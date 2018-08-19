#include <cstdio>
#include <cstring>
int t, n, cnt[100001];
bool check[100001];
void prime(){
  check[1] = 1;
  for(int i = 2;i * i <= 100000;i++){
    if(!check[i]){
      for(int j = i * 2;j <= 100000;j += i)
        check[j] = 1;
    }
  }
}
int main(){
  scanf("%d", &t);
  while(t--){
    memset(cnt, 0, sizeof(cnt));
    scanf("%d", &n);
    int temp = n;
    for(int i = 2;i <= n;i++){
      if(!temp)  break;
      if(!check[i] && !(temp % i)){
        while(!(temp % i)){
          cnt[i]++;
          temp /= i;
        }
      }
    }
    for(int i = 2;i <= n;i++){
      if(cnt[i])  printf("%d %d\n", i, cnt[i]);
    }
  }
}
