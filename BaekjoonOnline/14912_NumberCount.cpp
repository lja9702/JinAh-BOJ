#include <cstdio>
int digit[10];
int main(){
  int n, d;
  scanf("%d %d", &n, &d);
  for(int i = 1;i <= n;i++){
    int temp = i;
    while(temp){
      digit[temp % 10]++;
      temp /= 10;
    }
  }
  printf("%d\n", digit[d]);
}
