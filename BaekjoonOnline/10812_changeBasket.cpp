#include <cstdio>
#include <algorithm>
int n, m, arr[101];
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++) arr[i] = i + 1;
  while(m--){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    a--, b--, c--;
    std::rotate(arr + a, arr + c, arr + b + 1);
  }
  for(int i = 0;i < n;i++) printf("%d ", arr[i]);
  printf("\n");
}
