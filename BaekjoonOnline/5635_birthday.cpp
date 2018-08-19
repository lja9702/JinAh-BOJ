#include <cstdio>
#include <algorithm>
struct info{
  char name[20];
  int d, m, y;
  bool operator < (info a){
    if(this -> y == a.y){
      if(this -> m == a.m)  return this -> d < a.d;
      return this -> m < a.m;
    }
    return this -> y < a.y;
  }
};
int n;
info info[101];
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)
    scanf(" %s %d %d %d", info[i].name, &info[i].d, &info[i].m, &info[i].y);
  std::sort(info, info + n);
  printf("%s\n%s\n", info[n - 1].name, info[0].name);
}
