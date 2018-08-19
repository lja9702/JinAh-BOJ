#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
struct jewel{
  long long m, v;
  bool operator < (jewel a){
    return this->m < a.m;
  }
};
jewel J[300001];
long long n, k, C[300001], curJ, curC, res;
int main(){
  scanf("%lld %lld", &n, &k);
  for(int i = 0;i < n;i++)  scanf("%lld %lld", &J[i].m, &J[i].v);
  for(int i = 0;i < k;i++)  scanf("%lld", &C[i]);
  sort(J, J + n); sort(C, C + k);
  priority_queue<long long> pQ;
  while(curC < k){
    while(curJ < n && J[curJ].m <= C[curC])
      pQ.push(J[curJ++].v);
    if(!pQ.empty()){
      res += pQ.top();
      pQ.pop();
    }
    curC++;
  }
  printf("%lld\n", res);
}
