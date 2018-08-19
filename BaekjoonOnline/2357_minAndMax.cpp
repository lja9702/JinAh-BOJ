#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> segMin, segMax;
int n, m, idx, t, a, b;
void findMin(int l, int r){
  int res = 1 << 30;
  while(l <= r){
    if(l % 2) res = min(res, segMin[l++]);
    if(r % 2 == 0)  res = min(res, segMin[r--]);
    r /= 2, l /= 2;
  }
  printf("%d ", res);
  return ;
}
void findMax(int l, int r){
  int res = 0;
  while(l <= r){
    if(l % 2) res = max(res, segMax[l++]);
    if(r % 2 == 0)  res = max(res, segMax[r--]);
    r /= 2, l /= 2;
  }
  printf("%d\n", res);
  return ;
}
int main(){
  scanf("%d %d", &n, &m);
  for(idx = 1;idx <= n;idx <<= 1);
  segMin = vector<int>(idx * 2, 1 << 30);
  segMax = vector<int>(idx * 2, 0);
  for(int i = 0;i < n;i++){
    scanf("%d", &t);
    segMin[i + idx] = t, segMax[i + idx] = t;
  }
  for(int i = idx - 1;i >= 1;i--){
    segMin[i] = min(segMin[i * 2], segMin[i * 2 + 1]);
    segMax[i] = max(segMax[i * 2], segMax[i * 2 + 1]);
  }
  while(m--){
    scanf("%d %d", &a, &b);
    findMin(a + idx - 1, b + idx - 1);
    findMax(a + idx - 1, b + idx - 1);
  }
}
