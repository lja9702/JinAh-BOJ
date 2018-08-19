#include <cstdio>
#include <utility>
using namespace std;
pair<int, int> p[3];
int main(){
  for(int i = 0;i < 3;i++)
    scanf("%d %d", &p[i].first, &p[i].second);
  int res = p[0].first * p[1].second + p[1].first * p[2].second + p[2].first * p[0].second;
  res -= (p[1].first * p[0].second + p[2].first * p[1].second + p[0].first * p[2].second);
  if(res > 0) printf("1\n");
  else if(res < 0)  printf("-1\n");
  else  printf("0\n");
}
