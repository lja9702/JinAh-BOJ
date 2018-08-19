#include <cstdio>
int n, a;
bool check[100001];
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++)
    scanf("%d", &a);
  check[1] = 1;
  for(int i = 2;i * i <= 100000;i++){
    if(!check[i]){
      for(int j = i * 2;j <= 100000;j += i)
        check[j] = 1;
    }
  }
  if(!check[n]) printf("Yes\n");
  else  printf("No\n");
}
