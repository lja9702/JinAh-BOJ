#include <cstdio>
long long n, sum;
int main(){
  scanf("%lld", &n);
  for(int i = 1;i < n;i++)
    sum += i * n + i;
  printf("%lld\n", sum);
}
