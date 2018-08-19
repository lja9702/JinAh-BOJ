#include <cstdio>
#include <algorithm>
#include <cstring>
char mat[21], arr1[101], arr2[101];
int dp[2][101][21], lenM, len1, len2;
int main(){
  scanf(" %s %s %s", mat, arr1, arr2);
  lenM = strlen(mat), len1 = strlen(arr1), len2 = strlen(arr2);
  for(int k = 0;k < lenM;k++){
    for(int i = 0;i < len1;i++){
      if(arr1[i] == mat[k]){
        if(k == 0)  dp[0][i][k] = 1;
        else{
          for(int j = 0;j < i && j < len2;j++){
            if(arr2[j] == mat[k - 1])
              dp[0][i][k] += dp[1][j][k - 1];
          }
        }
      }
    }
    for(int i = 0;i < len2;i++){
      if(arr2[i] == mat[k]){
        if(k == 0)  dp[1][i][k] = 1;
        else{
          for(int j = 0;j < i && j < len1;j++){
            if(arr1[j] == mat[k - 1])
              dp[1][i][k] += dp[0][j][k - 1];
          }
        }
      }
    }
  }
  int res =0;
  for(int i = 0;i < len1;i++)
    res += dp[0][i][lenM - 1];
  for(int i = 0;i < len2;i++)
    res += dp[1][i][lenM - 1];
  printf("%d\n", res);
}
//dp[i][j][k] : i가 0이면 악마의 돌다리, 1이면 천사의 돌다리 에서 시작했을 떼
//j번째 글자가 비교문자열의 k에 해당할 때의 경우의 수
