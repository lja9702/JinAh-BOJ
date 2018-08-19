#include <cstdio>
long long mod[1000001], n, m, res = 0, a, sum = 0;
long long nCr(long long n){
  return n * (n - 1) / 2;
}
int main(){
  scanf("%lld %lld", &n, &m);
  mod[0]++;
  for(int i = 1;i <= n;i++){
    scanf("%lld", &a);
    sum += a, sum %= m, mod[sum]++;
  }
  for(int i = 0;i < m;i++)  res += nCr(mod[i]);
  printf("%lld\n", res);
}
