#include <cstdio>
#include <deque>
using namespace std;
deque <int> dq;
int checkIdx(int a){
  for(int i = 0;i < dq.size();i++){
    if(a == dq[i])  return i;
  }
}
int main(){
  int cur = 0, n, m, arr[51] = {0}, res = 0;
  scanf("%d %d", &n, &m);
  for(int i = 0;i < m;i++)
    scanf("%d", &arr[i]);
  for(int i = 1;i <= n;i++)  dq.push_back(i);
  while(!dq.empty() && cur < m){
    int fr = dq.front(), bk = dq.back();
    if(fr == arr[cur])
      dq.pop_front(), cur++;
    else if(checkIdx(arr[cur]) <= dq.size() / 2)
      dq.pop_front(), dq.push_back(fr), res++;
    else
      dq.pop_back(), dq.push_front(bk), res++;
  }
  printf("%d\n", res);
}
