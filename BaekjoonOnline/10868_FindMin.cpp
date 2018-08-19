#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> segMin;
int n, m, idx, t, a, b;
void findMin(int l, int r){
  int res = 1 << 30;
  while(l <= r){
    if(l % 2) res = min(res, segMin[l++]);
    if(r % 2 == 0)  res = min(res, segMin[r--]);
    r /= 2, l /= 2;
  }
  printf("%d\n", res);
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  for(idx = 1;idx <= n;idx <<= 1);
  segMin = vector<int>(idx * 2, 1 << 30);
  for(int i = 0;i < n;i++)
    scanf("%d", &segMin[i + idx]);
  for(int i = idx - 1;i >= 1;i--)
    segMin[i] = min(segMin[i * 2], segMin[i * 2 + 1]);
  while(m--){
    scanf("%d %d", &a, &b);
    findMin(a + idx - 1, b + idx - 1);
  }
}
