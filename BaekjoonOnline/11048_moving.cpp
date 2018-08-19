#include <cstdio>
#include <algorithm>
int n, m, arr[1001][1001];
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= m;j++)
      scanf("%d", &arr[i][j]);
  }
  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= m;j++)
      arr[i][j] += std::max(arr[i - 1][j], std::max(arr[i][j - 1], arr[i - 1][j - 1]));
  }
  printf("%d\n", arr[n][m]);
}
