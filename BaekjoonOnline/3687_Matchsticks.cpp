#include <cstdio>
#include <cstring>
using namespace std;
int t, n;
long long dp[110]  = {0, 0, 1, 7, 4, 2, 6, 8, 10, 18, 22, 20, 28, 68, 88};
int main(){
  scanf("%d", &t);
  for(int i = 15;i <= 100;i++){
    dp[i] = dp[i - 7] * 10 + 8;
    if(i == 17) dp[i] = 200;
  }
  while(t--){
    scanf("%d", &n);
    char max[120] = {0};
    if(n == 2) strcpy(max, "1");
    else if(n == 3) strcpy(max , "7");
    else{
      int cur2 = 0, temp = n;
      if(n % 2){
        max[cur2++] = '7', temp -= 3;
        while(temp) max[cur2++] = '1', temp -= 2;
      }
      else{
        while(temp) max[cur2++] = '1', temp -= 2;
      }
    }
    printf("%lld %s\n", dp[n], max);
  }
}
