#include <cstdio>
#include <vector>
#define DIV 1000000007
using namespace std;
vector <long long> seg;
int idx;
void findMul(int l,int r){
    long long res = 1;
    while(l <= r){
      if(l % 2) res = (res * seg[l++]) % DIV;
      if(r % 2 == 0)  res = (res * seg[r--]) % DIV;
      l /= 2, r /= 2;
    }
    printf("%lld\n", res);
    return ;
}
void update(int ind, long long t){
    seg[ind] = t, ind /= 2;
    while(ind){
      seg[ind] = (seg[ind * 2 + 1] * seg[ind * 2]) % DIV;
      ind /= 2;
    }
}
int main(){
  long long n, m, k, a, b, c;
  scanf("%lld %lld %lld", &n, &m, &k);
  for(idx = 1;idx <= n;idx <<= 1);
  seg = vector<long long> (idx * 2 + 1, 1);
  for(int i = 0;i < n;i++)  scanf("%lld", &seg[i + idx]);
  for(int i = idx - 1;i >= 1;i--)
    seg[i] = (seg[i * 2] * seg[i * 2 + 1]) % DIV;
  while(m + k){
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a == 1){
      update(b - 1 + idx, c);
      m--;
    }
    else{
      findMul(b - 1 + idx, c - 1 + idx);
      k--;
    }
  }
}
