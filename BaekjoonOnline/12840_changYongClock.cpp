#include <cstdio>
int tc, h, m, s, t, c;
void changeTime(){
  int cnt = 0;
  while(s > 59) s -= 60, cnt++;
  m += cnt;
  cnt = 0;
  while(m > 59) m -= 60, cnt++;
  h += cnt;
  while(h > 23) h -= 24;
}
int main(){
  scanf("%d %d %d %d", &h, &m, &s, &tc);
  while(tc--){
    scanf("%d", &t);
    if(t == 1){
      scanf("%d", &c);
      int ts = c % 60, tm = (c / 60) % 60, th = c / 3600;
      s += ts, m += tm, h += th;
      changeTime();
    }
    else if(t == 2){
      scanf("%d", &c);
      int tim = h * 3600 + m * 60 + s;
      while(tim < c) tim += 86400; //86400은 24시간을 초로바꾼 시간
      tim -= c;
      s = tim % 60, m = (tim / 60) % 60, h = tim / 3600;
    }
    else
      printf("%d %d %d\n", h, m, s);
  }
}
