#include <cstdio>
#include <algorithm>
using namespace std;
int n, m, nn[500001], mm[500001], cnt[500001];
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)  scanf("%d", &nn[i]);
  scanf("%d", &m);
  for(int i = 0;i < m;i++)  scanf("%d", &mm[i]);
  sort(nn, nn + n);
  for(int i = 0;i < m;i++){
    int lb = 0, ub = 0;
    lb = lower_bound(nn, nn + n, mm[i]) - nn;
    ub = upper_bound(nn, nn + n, mm[i]) - nn;
    cnt[i] = ub - lb;
  }
  for(int i = 0;i < m;i++)
    printf("%d ", cnt[i]);
  printf("\n");
}
