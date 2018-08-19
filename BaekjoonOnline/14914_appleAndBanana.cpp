#include <cstdio>
#include <algorithm>
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int minn = std::min(a, b);
  for(int i = 1;i <= minn;i++){
    if(!(a % i) && !(b % i))
      printf("%d %d %d\n", i, a / i, b / i);
  }
}
