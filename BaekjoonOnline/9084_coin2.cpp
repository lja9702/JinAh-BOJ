#include <cstdio>
int t, n, m;
int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    int coin[21] = {0}, dp[10001] = {0};
    for(int i = 1;i <= n;i++)  scanf("%d", &coin[i]);
    scanf("%d", &m);
    for(int i = 1;i <= n;i++){
      dp[coin[i]]++;
      for(int j = coin[i];j <= m;j++){
        dp[j] += dp[j - coin[i]];
      }
    }
    printf("%d\n", dp[m]);
  }
}
