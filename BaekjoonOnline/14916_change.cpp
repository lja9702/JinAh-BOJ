#include <cstdio>
int main(){
  bool flag = 0;
  int res = 0, n;
  scanf("%d", &n);
  for(int i = n / 5;i >= 0;i--){
    int temp = n - i * 5;
    if(!(temp % 2)){
      res = i + temp / 2;
      flag = 1;
      break;
    }
  }
  if(flag)  printf("%d\n", res);
  else  printf("-1\n");
}
