#include <cstdio>
#include <algorithm>
int t;
int main(){
  scanf("%d", &t);
  while(t--){
    int n, arr[21] = {0};
    scanf("%d", &n);
    for(int i = 0;i < n;i++)  scanf("%d", &arr[i]);
    std::sort(arr, arr + n);
    int res = arr[n - 1] - arr[0];
    for(int i = 1;i < n;i++)  res += arr[i] - arr[i - 1];
    printf("%d\n", res);
  }
}
