#include <cstdio>
#include <algorithm>
int main(){
  while(1){
    int n, mm, kcal[5001] = {0}, cost[5001] = {0}, dp[10001] = {0};
    double m, ct;
    scanf("%d %lf", &n, &m);
    mm = m * 100;
    if(!n && !m)  return 0;
    for(int i = 1;i <= n;i++){
      scanf("%d %lf", &kcal[i], &ct);
      cost[i] = ct * 100 ;  //+ 0.5를 하는것이 부동소숫점 오류안나기 쉽다 !
    }
    for(int i = 1;i <= n;i++){
      for(int j = cost[i];j <= mm;j++)
        dp[j] = std::max(dp[j], dp[j - cost[i]] + kcal[i]);
    }
    printf("%d\n", dp[mm]);
  }
}
