#include <cstdio>
int a, n, m, drop, cnt, st = 1, end = st;
int main(){
  scanf("%d %d %d", &n, &m, &drop);
  end += m - 1;
  while(drop--){
    scanf("%d", &a);
    if(a >= st && a <= end) continue;
    else if(a > end){
      while(a > end)  end++, st++, cnt++;
    }
    else{
      while(a < st) end--, st--, cnt++;
    }
  }
  printf("%d\n", cnt);
}
