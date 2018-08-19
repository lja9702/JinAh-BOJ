#include <cstdio>
#define MOD 1000000000
long long n, dp[1000001];
long long abs(long long a){
  if(a < 0) return -a;
  return a;
}
int main(){
  scanf("%lld", &n);
  long long temp = abs(n);
  dp[1] = 1, dp[2] = 1;
  for(int i = 3;i <= temp;i++) dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
  if(n > 0)  printf("1\n%lld\n", dp[n]);
  else if(!n) printf("0\n0\n");
  else{
    if(temp % 2)  printf("1\n%lld\n", dp[temp]);
    else  printf("-1\n%lld\n", dp[temp]);
  }
}
