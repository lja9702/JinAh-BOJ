#include <cstdio>
int bino(int n, int k){
  if(n == k || k == 0)  return 1;
  return bino(n - 1, k - 1) + bino(n - 1, k);
}
int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%d\n", bino(n, k));
}
