#include <cstdio>
#include <cmath>
const double DIM = 31250;
int main(){
  double a, b, x, y;
  scanf("%lf %lf", &a, &b);
  if(a == 0 && b == 250) x = 125, y = 0;
  else if(a == 250 && b == 0) x = 0, y = 125;
  else if(b == 0){
    if(a > 125) x = 0, y = DIM / a;
    else  y = DIM / (250 - a), x = -y + 250;
  }
  else if(a == 0){
    if(b > 125) y = 0, x = DIM / b;
    else  x = DIM / (250 - b), y = -x + 250;
  }
  else if(a < 125)  x = 250 - DIM / b, y = 0;
  else  y = 250 - DIM / a, x = 0;
  printf("%.2lf %.2lf\n", x, y);
}
