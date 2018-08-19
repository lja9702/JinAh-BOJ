#include <cstdio>
long long a, b;
long long gcd(int a, int b){
  if(b == 0)  return a;
  return gcd(b, a % b);
}
int main(){
  scanf("%lld %lld", &a, &b);
  long long res = gcd(a, b), r1, r2;
  r1 = a / res, r2 = b / res;
  printf("%lld\n", res * r1 * r2);
}
