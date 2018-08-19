#include <cstdio>
#include <algorithm>
int arr[65], cur;
int main(){
  long long n;
  scanf("%lld", &n);
  while(n){
    arr[cur++] = n % 2;
    n /= 2;
  }
  for(int i = cur -1;i >= 0;i--)  printf("%d", arr[i]);
  printf("\n");
}
