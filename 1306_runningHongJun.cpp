#include <cstdio>
#include <deque>
using  namespace std;
int n, m, arr[1000001];
int main(){
  deque<pair<int, int> > dq;
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++) scanf("%d", &arr[i]);
  for(int i = 1;i <= n;i++){
    if(dq.empty())  dq.push_back({arr[i],i});
    else{
      while(!dq.empty() && i - dq.front().second >= 2 * m - 1)
        dq.pop_front();
      while(!dq.empty() && dq.back().first < arr[i])
        dq.pop_back();
      dq.push_back({arr[i], i});
    }
    int res = dq.front().first;
    if(i >= 2 * m - 1)  printf("%d ", res);
  }
  printf("\n");
}
