#include <cstdio>
#include <cmath>
long long n;
int main(){
  scanf("%lld", &n);
  long long res = sqrt(n);
  if(res * res == n)  printf("%lld\n", res);
  else  printf("%lld\n", res + 1);
}
