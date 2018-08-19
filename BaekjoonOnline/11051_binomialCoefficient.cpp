#include <cstdio>
int arr[1001][1001], n, k;
int main(){
  for(int i = 1;i <= 1000;i++){
    arr[i][0] = arr[i][i] = 1;
    arr[i][1] = i;
    for(int j = 2;j <= i;j++)
      arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
  }
  scanf("%d %d", &n, &k);
  printf("%d\n", arr[n][k]);
}
