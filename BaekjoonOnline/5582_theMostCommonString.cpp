#include <cstdio>
#include <cstring>
#include <algorithm>
char str1[4010], str2[4010];
int dp[4010][4010], res = 0;
int main(){
  scanf(" %s %s", str1, str2);
  int len1 = strlen(str1), len2 = strlen(str2);
  for(int i = 0;i < len1;i++){
    for(int j = 0;j < len2;j++){
      if(str1[i] == str2[j]){
        dp[i + 1][j + 1] = dp[i][j] + 1;
        if(res < dp[i + 1][j + 1])  res = dp[i + 1][j + 1];
      }
    }
  }
  printf("%d\n", res);
}
