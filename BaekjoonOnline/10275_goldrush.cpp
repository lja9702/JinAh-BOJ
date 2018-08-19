#include <cstdio>
long long n, a, b, t;
int main(){
  scanf("%lld", &t);
  while(t--){
    scanf("%lld %lld %lld", &n, &a, &b);
    long long l = 1, r = a + b, tar = a, cnt = 0;
    if(b < a) tar = b;
    while(l <= r && tar){
      cnt++;
      long long mid = (l + r) / 2;
      if(tar >= mid) tar -= mid;
      if(tar < mid) r = mid - 1;
    }
    printf("%lld\n", cnt);
  }
}
