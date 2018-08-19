#include <cstdio>
#include <algorithm>
int t, n, p;
int gd[3][4] = {{0, 2, 0, 0}, {0, 3, 6, 0}, {0, 4, 4, 12}};
bool mode = 0;
int main(){
  scanf("%d", &t);
  for(int k = 1;k <= t;k++){
    int res = 0, mod[4] = {0}, a;
    scanf("%d %d", &n, &p);
    if(p == 4)  mode = 1;
    for(int i = 0;i < n;i++){
      scanf("%d", &a);
      mod[a % p]++;
    }
    res += mod[0];
    for(int i = 1;i * i <= p;i++){
      if(i != p - i){
        int minn = std::min(mod[i], mod[p - i]);
        res += minn, mod[p - i] -= minn, mod[i] -= minn;
      }
    }
    for(int i = 1;i < p;i++){
      if(mod[i]){
        res += mod[i] * i / gd[p - 2][i];
        mod[i] -= mod[i] * i / gd[p - 2][i] * (gd[p - 2][i] / i);
      }
    }
    if(mode){
        while(mod[1] >= 2 && mod[2] >= 1)
          res++, mod[1] -= 2, --mod[2];
        while(mod[2] >= 1 && mod[3] >= 2)
          res++, --mod[2], mod[3] -= 2;
    }
    for(int i = 1;i < p;i++){
      if(mod[i]){
        res++;
        break;
      }
    }
    printf("Case #%d: %d\n", k, res);
  }
}
