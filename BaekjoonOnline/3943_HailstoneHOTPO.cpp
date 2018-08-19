#include <cstdio>
#include <algorithm>
long long t, n, dp[100001];
int main(){
  dp[1] = 1, dp[2] = 2, dp[4] = 4;
  for(int i = 3;i <= 100000;i++){
    long long temp = i;
    while(temp >= i){
      dp[i] = std::max(dp[i], temp);
      if(temp % 2)  temp = temp * 3 + 1;
      else  temp /= 2;
    }
    dp[i] = std::max(dp[i], dp[temp]);
  }
  scanf("%lld", &t);
  while(t--){
    scanf("%lld", &n);
    printf("%lld\n", dp[n]);
  }
}
