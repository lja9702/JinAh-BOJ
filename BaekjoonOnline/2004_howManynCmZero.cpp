#include <cstdio>
#include <algorithm>
long long n, m, two = 2, cntT[3], cntF[3], five = 5;
int main(){
  scanf("%lld %lld", &n, &m);
  long long nm = n - m;
  while(n >= two){
    if(m >= two) cntT[1] += m / two;
    if(nm >= two) cntT[2] += nm / two;
    cntT[0] += n / two;
    two *= 2;
  }
  while(n >= five){
    if(m >= five) cntF[1] += m / five;
    if(nm >= five) cntF[2] += nm / five;
    cntF[0] += n / five;
    five *= 5;
  }
  cntT[0] -= (cntT[1] + cntT[2]);
  cntF[0] -= (cntF[1] + cntF[2]);
  printf("%lld\n", std::min(cntT[0], cntF[0]));
}
