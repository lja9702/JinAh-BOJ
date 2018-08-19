#include <cstdio>
#include <algorithm>
int n, m, arr[101];
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++)  arr[i] = i + 1;
  while(m--){
    int a, b;
    scanf("%d %d", &a, &b);
    a--;
    std::reverse(arr + a, arr + b);
  }
  for(int i = 0;i < n;i++)  printf("%d ", arr[i]);
  printf("\n");
}
