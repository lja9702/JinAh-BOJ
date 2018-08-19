#include <cstdio>
#include <algorithm>
#define MAX (1 << 31 - 1)
int n, k, arr[10001], l = 1, r = MAX, maxx;
int main(){
  scanf("%d %d", &n, &k);
  for(int i = 0;i < n;i++)  scanf("%d", &arr[i]);
  while(l <= r){
    int res = 0, mid = (l + r) / 2;
    for(int i = 0;i < n;i++)
      res += (arr[i] / mid);
    if(res >= k){
      maxx = std::max(mid, maxx);
      l = mid + 1;
    }
    else  r = mid - 1;
  }
  printf("%d\n", maxx);
}
