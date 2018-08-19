#include <cstdio>
void fibo(int n, int st, int end){
  int mid = 6 - st - end;
  if(!n)  return ;
  fibo(n - 1, st, mid);
  printf("%d %d\n", st, end);
  fibo(n - 1, mid, end);
}
int main(){
  int n;
  int str[40]={0}, len = 1;
  scanf("%d", &n);
  str[0] = 1;
  int temp = n;
  while(temp){
    int carry[40] = {0};
    for(int i = 0;i < len;i++){
      str[i] = str[i] * 2 + carry[i];
      carry[i + 1] = str[i] / 10;
      str[i] %= 10;
    }
    if(carry[len]){
      str[len] += carry[len];
      len++;
    }
    temp--;
  }
  for(int i = len - 1;i > 0;i--)
    printf("%d", str[i]);
  printf("%d\n",str[0] - 1);
  if(n <= 20)
    fibo(n, 1, 3);
}
