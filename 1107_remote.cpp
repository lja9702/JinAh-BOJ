#include <cstdio>
#include <cmath>
#include <algorithm>
bool check[10];
int n, m, comp1 = 1 << 29, comp2 = 1 << 29, comp3, res;
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < m;i++){
    int a;
    scanf("%d", &a);
    check[a] = 1;
  }
  for(int i = n;i <= 1000000;i++){
    bool fl = 0;
    int temp = i, cnt = 0;
    while(temp){
      if(check[temp % 10]){
        fl = 1;
        break;
      }
      temp /= 10, cnt++;
    }
    if(!i && check[i])  fl = 1;
    if(!fl){
      comp1 = cnt + abs(i - n);
      if(!i)  comp1++;
      printf("comp1: %d\n", i);
      break;
    }
  }
  for(int i = n;i >= 0;i--){
    bool fl = 0;
    int temp = i, cnt = 0;
    while(temp){
      if(check[temp % 10]){
        fl = 1;
        break;
      }
      temp /= 10, cnt++;
    }
    if(!i && check[i])  fl = 1;
    if(!fl){
      comp2 = cnt + abs(i - n);
      printf("comp2: %d\n", i);
      if(!i)  comp2++;
      break;
    }
  }
  comp3 = abs(n - 100);
  res = std::min(std::min(comp1, comp2), comp3);
  printf("%d\n", res);
}
