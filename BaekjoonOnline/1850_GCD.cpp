#include <cstdio>
long long gcd(long long a, long long b){
  if(b == 0)  return a;
  return gcd(b, a % b);
}
int main(){
  long long ta, tb;
  scanf("%lld %lld", &ta, &tb);
  long long res = gcd(ta, tb);
  for(int i = 0;i < res;i++)  printf("1");
  printf("\n");
}
