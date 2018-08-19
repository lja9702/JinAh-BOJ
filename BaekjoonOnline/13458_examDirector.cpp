#include <cstdio>
long long n, b, c, arr[1000001], direct[1000001], res = 0;
int main(){
  scanf("%lld", &n);
  for(int i = 1;i <= n;i++)  scanf("%lld", &arr[i]);
  scanf("%lld %lld", &b, &c);
  for(int i = 1;i <= n;i++)
    arr[i] -= b, direct[i]++;
  for(int i = 1;i <= n;i++){
    if(arr[i] > 0){
      direct[i] += arr[i] / c;
      if(arr[i] % c) direct[i]++;
    }
    res += direct[i];
  }
  printf("%lld\n", res);
}
