#include <cstdio>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;
pair <int, int> cup[200001];
int n, res, fin, cur = 0;
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++){
    scanf("%d %d", &cup[i].first, &cup[i].second);
    fin = max(fin, cup[i].first);
  }
  sort(cup, cup + n, greater<pair <int, int> >());
  priority_queue<int> pQ;
  for(int i = fin;i >= 1;i--){
    while(cup[cur].first >= i && cur < n)
      pQ.push(cup[cur++].second);
    if(!pQ.empty()){
      res += pQ.top();
      pQ.pop();
    }
  }
  printf("%d\n", res);
}
