#include <cstdio>

int main(){
  int a, d, an;
  scanf("%d %d %d", &a, &d, &an);
  int res = (an - a) / d;
  if(a + res * d == an && res >= 0)  printf("%d\n", res + 1);
  else  printf("X\n");
}
