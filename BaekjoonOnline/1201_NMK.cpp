#include <cstdio>
#include <algorithm>
using namespace std;
int n, m, k, num[501];
int main(){
  scanf("%d %d %d", &n, &m, &k);
  if(m + k > n + 1 || m * k < n){
      printf("-1\n");
      return 0;
  }
  for(int i = 0;i < n;i++) num[i] = i + 1;
  reverse(num + n - k, num + n);
  int t1 = n - k, t2 = m - 1;
  while(t1){
    int gap = t1 / t2;
    reverse(num + t1 - gap, num + t1);
    t1 -= gap, t2--;
  }
  for(int i = 0;i < n;i++)
    printf("%d ", num[i]);
  printf("\n");
}
