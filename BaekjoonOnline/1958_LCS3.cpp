#include <cstdio>
#include <cstring>
#include <algorithm>
#include <stack>
using namespace std;
char list[3][120];
int lcs[120][120][120];
stack<int> S;
int main(){
  for(int i = 0;i < 3;i++)
    scanf(" %s", list[i]);
  int len1 = strlen(list[0]), len2 = strlen(list[1]), len3 = strlen(list[2]);
  for(int i = 0;i < len1;i++){
    for(int j = 0;j < len2;j++){
      for(int k = 0;k < len3;k++){
        if(list[0][i] == list[1][j] && list[1][j] == list[2][k])
          lcs[i + 1][j + 1][k + 1] = lcs[i][j][k] + 1;
        else
          lcs[i + 1][j + 1][k + 1] = max(lcs[i + 1][j + 1][k], max(lcs[i + 1][j][k + 1], lcs[i][j + 1][k + 1]));
      }
    }
  }
  printf("%d\n", lcs[len1][len2][len3]);
}
