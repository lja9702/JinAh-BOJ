#include <cstdio>
#include <bitset>
std::bitset<33554433> b;
int a;
int main(){
  while(scanf("%d", &a) != EOF){
    if(!b[a]){
      b[a] = 1;
      printf("%d ", a);
    }
  }
}
