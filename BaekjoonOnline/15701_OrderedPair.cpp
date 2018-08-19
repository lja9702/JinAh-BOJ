#include <cstdio>
int i, n, cnt;
int main(){
  scanf("%d", &n);
  for(i = 1;i * i < n;i++){
    if(n % i == 0)  cnt++;
  }
  cnt *= 2;
  if(i * i == n)  cnt++;
  printf("%d\n", cnt);
}
