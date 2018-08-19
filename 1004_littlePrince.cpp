#include <cstdio>
#include <cmath>

int main(){
  int t, x1, y1, x2, y2, n, cx, cy, r;
  scanf("%d", &t);
  while(t--){
    int cnt = 0;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d", &n);
    while(n--){
      scanf("%d %d %d", &cx, &cy, &r);
      int t1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
      int t2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
      if((t1 < r * r && t2 >= r * r )|| (t2 < r * r && t1 >= r * r))  cnt++;
    }
    printf("%d\n", cnt);
  }
}
