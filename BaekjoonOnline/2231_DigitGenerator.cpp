#include <cstdio>
int n;
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++){
    int temp = i, sum = i;
    while(temp){
      sum += (temp % 10);
      temp /= 10;
    }
    if(sum == n){
      printf("%d\n", i);
      return 0;
    }
  }
  printf("0\n");
}
