#include <cstdio>
#include <algorithm>
int n, arr[1000001];
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)  scanf("%d", &arr[i]);
  std::sort(arr, arr + n);
  for(int i = 0;i < n;i++)  printf("%d\n", arr[i]);
}
