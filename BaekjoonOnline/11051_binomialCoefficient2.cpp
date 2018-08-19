#include <cstdio>
int arr[1001][1001];
int bino(int n, int k){
  if(arr[n][k]) return arr[n][k];
  if(n == k || k == 0)  return arr[n][k] = 1;
  return arr[n][k] = (bino(n - 1, k - 1) + bino(n - 1, k)) % 10007;
}
int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%d\n", bino(n, k));
}
