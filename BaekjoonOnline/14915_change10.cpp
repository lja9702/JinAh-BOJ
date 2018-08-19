#include <cstdio>
int main(){
  int m, n, num[20], cnt = 0;
  scanf("%d %d", &m, &n);
  if(m == 0){
    printf("0\n");
    return 0;
  }
  while(m){
    num[cnt++] = m % n;
    m /= n;
  }
  for(int i = cnt - 1;i >= 0;i--){
    if(num[i] >= 10) printf("%c", num[i] - 10 + 'A');
    else  printf("%d", num[i]);
  }
  printf("\n");
}
