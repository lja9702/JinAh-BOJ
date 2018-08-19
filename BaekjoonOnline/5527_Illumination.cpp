#include <cstdio>
#include <algorithm>
int arr[100001], g[100001], cnt = 1, res = 0;
int main(){
  int n;
  scanf("%d", &n);
  scanf("%d", &arr[0]); g[cnt]++;
  for(int i = 1;i < n;i++){
    scanf("%d", &arr[i]);
    if(arr[i] == arr[i - 1])  cnt++;
    g[cnt]++;
  }
  for(int i = 1;i <= cnt;i++)
    res = std::max(res, g[i - 1] + g[i] + g[i + 1]);
  printf("%d\n", res);
}
