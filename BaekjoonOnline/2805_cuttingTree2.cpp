#include <cstdio>
#include <algorithm>
int n, m, arr[1000010], l, r, res;
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++){
    scanf("%d", &arr[i]);
    r = std::max(r, arr[i]);
  }
  while(l <= r){
    int mid = (l + r) / 2;
    long long temp = 0;
    for(int i = 0;i < n;i++){
      if(arr[i] - mid > 0)  temp += (arr[i] - mid);
    }
    if(temp >= m){
      l = mid + 1;
      res = std::max(mid, res);
    }
    else  r = mid - 1;
  }
  printf("%d\n", res);
}
