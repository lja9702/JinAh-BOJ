#include <cstdio>

int main(){
  int a, resi = 0, resj = 0, max = 0;
  for(int i = 1;i < 10;i++){
    for(int j = 1;j < 10;j++){
      scanf("%d", &a);
      if(a > max) max = a, resi = i, resj = j;
    }
  }
  printf("%d\n%d %d\n", max, resi, resj);
}
