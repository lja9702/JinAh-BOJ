#include <cstdio>
int n, m, arr[100001], a, b;
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++){
    scanf("%d", &arr[i]);
    arr[i] += arr[i - 1];
  }
  while(m--){
    scanf("%d %d", &a, &b);
    printf("%d\n", arr[b] - arr[a - 1]);
  }
}
