#include <cstdio>
#include <vector>
using namespace std;
vector <long long> seg;
int idx;
void findSum(int l,int r){
    long long res = 0;
    while(l <= r){
      if(l % 2) res += seg[l++];
      if(r % 2 == 0)  res += seg[r--];
      l /= 2, r /=2;
    }
    printf("%lld\n", res);
    return ;
}
void update(int ind, long long t){
  long long gap = t - seg[ind];
  while(ind)
    seg[ind] += gap, ind /= 2;
}
int main(){
  long long n, m, k, a, b, c;
  scanf("%lld %lld %lld", &n, &m, &k);
  for(idx = 1;idx <= n;idx <<= 1);
  seg = vector<long long> (idx * 2 + 1, 0);
  for(int i = 0;i < n;i++)  scanf("%lld", &seg[i + idx]);
  for(int i = idx - 1;i >= 1;i--)
    seg[i] = seg[i * 2] + seg[i * 2 + 1];
  while(m + k){
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a == 1){
      update(b - 1 + idx, c);
      m--;
    }
    else{
      findSum(b - 1 + idx, c - 1 + idx);
      k--;
    }
  }
}
