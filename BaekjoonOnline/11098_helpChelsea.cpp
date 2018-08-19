#include <cstdio>
#include <cstring>
#include <algorithm>
int t, n;
struct info{
  int c;
  char name[30];
  bool operator < (info a){
    return this->c < a.c;
  }
};
int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    info in[101];
    for(int i = 0;i < n;i++)  scanf("%d %s", &in[i].c, in[i].name);
    std::sort(in, in + n);
    printf("%s\n", in[n - 1].name);
  }
}
