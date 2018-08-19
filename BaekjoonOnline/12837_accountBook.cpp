#include <cstdio>
#include <vector>
using namespace std;
vector<long long> seg;
int idx, n, q;
void sumFind(int l, int r){
    long long sum = 0;
    while(l <= r){
      if(l % 2) sum += seg[l++];
      if(r % 2 == 0)  sum += seg[r--];
      r /= 2, l/= 2;
    }
    printf("%lld\n", sum);
}
void update(int ind, long long val){
    while(ind){
      seg[ind] += val, ind /= 2;
    }
}
int main(){
  long long a, p, x;
  scanf("%d %d", &n, &q);
  for(idx = 1;idx <= n;idx <<= 1);
  seg = vector<long long>(idx * 2, 0);
  while(q--){
    scanf("%lld %lld %lld", &a, &p, &x);
    if(a == 1)
      update(p - 1 + idx, x);
    else
      sumFind(p - 1 + idx, x - 1 + idx);
  }
}
