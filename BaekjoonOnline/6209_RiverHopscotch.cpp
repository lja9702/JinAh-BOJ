#include <cstdio>
#include <algorithm>
int d, n, m, arr[50010], res;
int main(){
  scanf("%d %d %d", &d, &n, &m);
  arr[n + 1] = d;
  for(int i = 1;i <= n;i++)
    scanf("%d", &arr[i]);
  std::sort(arr, arr + n + 1);
  int l = 0, r = d;
  while(l <= r){
    int mid = (l + r) / 2;
    int last = 0, s = 0;
    for(int i = 1;i <= n + 1;i++){
      if(arr[i] - last > mid) last = arr[i], s++;
    }
    if(s <= n - m)  res = mid, r = mid - 1;
    else  l = mid + 1;
  }
  printf("%d\n", res);
}
