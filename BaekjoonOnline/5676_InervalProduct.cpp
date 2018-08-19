#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
vector<int> seg;
char arr[100001];
int idx, t, cnt;
void Mul(int l, int r){
  int res = 1;
  while(l <= r){
    if(l % 2) res *= seg[l++];
    if(r % 2 == 0)  res *= seg[r--];
    l /= 2, r /= 2;
  }
  if(res > 0)  arr[cnt++] = '+';
  else if(res < 0)  arr[cnt++] = '-';
  else arr[cnt++] = '0';
}
void update(int idx, int n){
  if(n < 0)  n = -1;
  else if(n > 0)  n = 1;
  seg[idx] = n, idx /= 2;
    while(idx)
      seg[idx] = seg[idx * 2] * seg[idx * 2 + 1], idx /= 2;
}
int main(){
  int n, k, a, b;
  while(scanf("%d %d", &n, &k) != EOF){
    char c;
    for(idx = 1;idx <= n;idx <<= 1);
    seg = vector<int>(idx * 2 + 1, 1);
    for(int i = 0;i < n;i++){
      scanf("%d", &t);
      if(t > 0) seg[i + idx] = 1;
      else if(t < 0)  seg[i + idx] = -1;
      else  seg[i + idx] = 0;
    }
    for(int i = idx - 1;i >= 1;i--)
      seg[i] = seg[i * 2] * seg[i * 2 + 1];
    while(k--){
      scanf(" %c %d %d", &c, &a, &b);
      if(c == 'C'){
        int cur = idx + a - 1;
        if((seg[cur] > 0 && b > 0) || (seg[cur] < 0 && b < 0) || (seg[cur] == b))
          continue;
        update(cur, b);
      }
      else
        Mul(idx + a - 1, idx + b - 1);
    }
    printf("%s\n", arr);
    cnt = 0;
    memset(arr, 0, sizeof(arr));
  }
}
