#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
long long arr[100001], res, idx;
int n;
vector<int> tree;
int find(int l, int r){
  int minn = l;
  while(l <= r){
    if(l % 2){
      if(arr[tree[l]] < arr[tree[minn]])  minn = l;
      l++;
    }
    if(r % 2 == 0){
      if(arr[tree[r]] < arr[tree[minn]])  minn = r;
      r--;
    }
    l /= 2, r /= 2;
  }
  return tree[minn];
}
void histogram(int st, int end){
  if(st < 0 || end >= n || st > end)  return;
  int cur = find(st + idx, end + idx);
  histogram(st, cur - 1);
  res = max(res, arr[cur] * (end - st + 1));
  histogram(cur + 1, end);
  return ;
}
int main(){
  while(1){
    scanf("%d", &n);
    if(!n)  return 0;
    res = 0;
    for(idx = 1;idx <= n;idx <<= 1);
    tree = vector<int> (idx * 2 + 1, -1);
    memset(arr, 0, sizeof(arr));
    for(int i = 0;i < n;i++){
      scanf("%lld", &arr[i]);
      tree[i + idx] = i;
    }
    for(int i = idx - 1;i >= 1;i--){
      if(tree[i * 2] == -1) tree[i] = tree[i * 2 + 1];
      else if(tree[i * 2 + 1] == -1)  tree[i] = tree[i * 2];
      else
        tree[i] = (arr[tree[i * 2]] < arr[tree[i * 2 + 1]] ? tree[i * 2] : tree[i * 2 + 1]);
    }
    histogram(0, n - 1);
    printf("%lld\n", res);
  }
}
