#include <cstdio>
#include <algorithm>
int arr[33002], l=1, r=1, res, cnt, n, d, k, c, check[3001];
int main(){
  scanf("%d %d %d %d", &n, &d, &k, &c);
  for(int i = 1;i <=n;i++)  scanf("%d", &arr[i]);
  for(int i = n + 1;i <= n + k;i++) arr[i] = arr[i - n];
  check[c]++;
  for(int i = 1;i <= k;i++){
    if(!check[arr[i]])  cnt++;
    check[arr[i]]++, res = cnt;
  }
  for(int i = k + 1;i <= n + k;i++){
    check[arr[i - k]]--;
    if(!check[arr[i - k]])  cnt--;
    if(!check[arr[i]])  cnt++;
    check[arr[i]]++;
    res = std::max(res, cnt);
  }
  printf("%d\n", res + 1);
}
