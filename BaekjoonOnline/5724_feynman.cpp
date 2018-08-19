#include <cstdio>
long long dp[101], n;
int main(){
  dp[1] = 1;
  for(int i = 2;i <= 100;i++)
    dp[i] = i * i + dp[i - 1];
  while(1){
    scanf("%lld", &n);
    if(!n)  return 0;
    printf("%lld\n", dp[n]);
  }
}
