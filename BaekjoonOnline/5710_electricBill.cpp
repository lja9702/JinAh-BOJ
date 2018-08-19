#include <cstdio>
#include <algorithm>
int a, b, cost[4] = {2, 3, 5, 7}, rang[4] = {200, 29700, 4950000};
int cas[4] = {100, 9900, 990000};
int abs(int p, int q){
  if(p > q) return p - q;
  return q - p;
}
int hour(int p){
  int cur = 0, res = 0;
  while(p && cur < 3){
    if(p >= cas[cur])
      p -= cas[cur], res += cas[cur] * cost[cur];
    else  res += p * cost[cur], p = 0;
    cur++;
  }
  if(p) res += p * cost[cur], p = 0;
  return res;
}
int main(){
  while(1){
    scanf("%d %d", &a, &b);
    int watt = 0, cur = 0, temp = a;
    if(!a && !b)  return 0;
    while(temp && cur < 3){
      if(temp >= rang[cur])
        temp -= rang[cur], watt += (rang[cur] / cost[cur]);
      else watt += temp / cost[cur], temp = 0;
      cur++;
    }
    if(temp)  watt += temp / cost[cur], temp = 0;
    int l = 0, r = watt, tot = watt;
    while(l <= r){
      int mid = (l + r) / 2;
      int tot1 = hour(mid), tot2 = hour(tot - mid);
      int gap = abs(tot1, tot2);
      if(gap == b){
        printf("%d\n", std::min(tot1, tot2));
        break;
      }
      if(gap > b) l = mid + 1;
      else  r = mid - 1;
    }
  }
}
