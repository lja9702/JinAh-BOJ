#include <cstdio>
#include <algorithm>
int k, n;
int main(){
  scanf("%d", &k);
  for(int i = 1;i <= k;i++){
    int arr[51] = {0}, gap = 0;
    scanf("%d", &n);
    for(int j = 0;j < n;j++)
      scanf("%d", &arr[j]);
    std::sort(arr, arr + n);
    for(int j = 1;j < n;j++)  gap = std::max(gap, arr[j] - arr[j - 1]);
    printf("Class %d\n", i);
    printf("Max %d, Min %d, Largest gap %d\n", arr[n - 1], arr[0], gap);
  }
}
