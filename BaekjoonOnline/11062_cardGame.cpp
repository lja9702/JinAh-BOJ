#include <cstdio>
#include <deque>
using namespace std;
int t, n, a;
int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    deque<int> dq;
    int res = 0, cnt = 0;
    for(int i = 0;i < n;i++){
      scanf("%d", &a);
      dq.push_back(a);
    }
    while(!dq.empty()){
      if(dq.front() < dq.back()){
        if(!(cnt % 2))  res += dq.back();
        printf("%d\n", dq.back());
        dq.pop_back();
      }
      else{
        if(!(cnt % 2))  res += dq.front();
        printf("%d\n", dq.front());
        dq.pop_front();
      }
      cnt++;
    }
    printf("%d\n", res);
  }
}
