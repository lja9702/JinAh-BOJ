#include <cstdio>

int main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  a += d / 3600, b += (d % 3600) / 60, c += d % 60;
  if(c >= 60) c -= 60, b++;
  if(b >= 60) b -= 60, a++;
  while(a >= 24)  a -= 24;
  printf("%d %d %d\n", a, b, c);
}
