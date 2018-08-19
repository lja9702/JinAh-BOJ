#include <cstdio>
#include <algorithm>
long long x, y, z, l, r, res, temp, mid;
int main(){
  while(scanf("%lld %lld", &x, &y) != EOF){
    bool ch = 0;
    z = y * 100 / x;
    r = 100000000000, l = 1;
    res = r;
    while(l <= r){
      mid = (l + r) / 2;
      temp = (y + mid) * 100 / (x + mid);
      if(temp > z)
        res = std::min(res, mid), r = mid - 1, ch = 1;
      else  l = mid + 1;
    }
    if(!ch)
      printf("-1\n");
    else printf("%lld\n", res);
  }
}
