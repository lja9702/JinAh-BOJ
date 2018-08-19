#include <cstdio>
int main(){
  int sum = 0, n;
  scanf("%d", &n);
  for(int i = 1;i <= n;i++){
    if(!(n % i)) sum += i;
  }
  printf("%d\n", sum * 5 - 24);
}
