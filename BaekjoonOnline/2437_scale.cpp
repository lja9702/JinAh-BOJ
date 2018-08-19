#include <cstdio>
#include <algorithm>
int sum = 1, n, arr[1001];
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)
    scanf("%d", &arr[i]);
  std::sort(arr, arr + n);
  for(int i = 0;i < n;i++){
    if(sum < arr[i])  break;
    sum += arr[i];
  }
  printf("%d\n", sum);
}
