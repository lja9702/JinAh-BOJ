#include <cstdio>

int main(){
  int t, d;
  scanf("%d", &t);
  while(t--){
    int res= 0;
    scanf("%d", &d);
    for(int i = 1;i * i <= d;i++){
      if(i + i * i > d) break;
      res = i;
    }
    printf("%d\n", res);
  }
}
