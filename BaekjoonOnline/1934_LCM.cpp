#include <cstdio>
int t, a, b;
long long gcd(int a, int b){
  if(!b)  return a;
  return gcd(b, a % b);
}
int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &a, &b);
    long long res = gcd(a, b), r1, r2;
    r1 = a / res, r2 = b / res;
    printf("%lld\n", res * r1 * r2);
  }
}
