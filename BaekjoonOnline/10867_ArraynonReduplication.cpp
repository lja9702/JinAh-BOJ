#include <cstdio>
#include <set>
using namespace std;
int a, n;
set <int> S;
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++){
    scanf("%d", &a);
    S.insert(a);
  }
  for(auto it = S.begin();it != S.end();it++)
    printf("%d ", *it);
  printf("\n");
}
