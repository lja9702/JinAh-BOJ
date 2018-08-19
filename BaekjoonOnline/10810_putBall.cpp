#include <cstdio>
int main(){
  int n, m, arr[101] = {0};
  scanf("%d %d", &n, &m);
  while(m--){
    int a, b, t;
    scanf("%d %d %d", &a, &b, &t);
    for(int i = a;i <= b;i++) arr[i] = t;
  }
  for(int i = 1;i <= n;i++) printf("%d ", arr[i]);
  printf("\n");
}
