#include <cstdio>
#define MOD 1000000007
long long n, catal[2601], t;
int main(){
  scanf("%lld", &t);
  catal[0] = catal[1] = 1;
  for(int i = 2;i <=2600;i++){
    for(int j = 0;j < i;j++)
      catal[i] = (catal[i] + (catal[j] * catal[i - j - 1]) % MOD) % MOD;
  }
  while(t--){
    scanf("%lld", &n);
    if(n % 2) printf("0\n");
    else printf("%lld\n", catal[n / 2]);
  }
}
