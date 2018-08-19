#include <stdio.h>
#include <algorithm>
int i, j, n, dp[1500001] = {0}, t[1500001] = {0}, p[1500001] = {0};
int main(){
   scanf("%d", &n);
   for(i = 1;i <= n;i++)
      scanf("%d %d", &t[i], &p[i]);
   for(i = 1;i <= n;i++){
      if(i + t[i] - 1 <= n)
         dp[i + t[i] - 1] = std::max(dp[i + t[i] - 1], dp[i - 1] + p[i]);
      dp[i] = std::max(dp[i - 1], dp[i]);
   }
   printf("%d\n", dp[n]);
}
