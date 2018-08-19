#include <stdio.h>

int main(){
   int i, j, n, dp[16] = {0}, t[16] = {0}, p[16] = {0};
   scanf("%d", &n);
   for(i = 1;i <= n;i++)
      scanf("%d %d", &t[i], &p[i]);
   for(i = 1;i <= n;i++){
      if(i + t[i] - 1 <= n)
         dp[i + t[i] - 1] = (dp[i + t[i] - 1] > dp[i - 1] + p[i] ? dp[i + t[i] - 1] : dp[i - 1] + p[i]);
      dp[i] = dp[i - 1] > dp[i] ? dp[i - 1] : dp[i];
   }
   printf("%d\n", dp[n]);
}