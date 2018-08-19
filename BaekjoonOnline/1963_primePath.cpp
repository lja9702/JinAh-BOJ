#include <cstdio>
#include <queue>
#include <map>
#include <cstdlib>
#include <cstring>
using namespace std;
bool prime[10001];
typedef pair<int, int> mp;
void primeCheck(){
  prime[1] = 1, prime[0] = 1;
  for(int i = 2;i * i <= 10000;i++){
    if(!prime[i]){
      for(int j = i * 2;j <= 10000;j+=i)
        prime[j] = 1;
    }
  }
}

int main(){
  int t, a, b;
  scanf("%d", &t);
  primeCheck();
  while(t--){
    int cnt = 0, flag = 0;
    queue <pair<int, int> > Q;
    scanf("%d %d", &a, &b);
    map <int, bool> M;
    Q.push(mp(a, 0));  M[a] = 1;
    while(!Q.empty()){
      int cur = 3, fr = Q.front().first, ct = Q.front().second, temp = fr;
      Q.pop();
      if(fr == b){
        printf("%d\n", ct);
        flag = 1;
        break;
      }
      char num[5] = {0};
      while(temp){
        num[cur--] =  (temp % 10) + '0';
        temp /= 10;
      }
      for(int i = 0;i < 4;i++){
        char tem[5] = {0};
        strcpy(tem, num);
        for(int j = 0;j <= 9;j++){
          tem[i] = j + '0';
          int tt = atoi(tem);
          if(tt >= 1000 && tt < 10000 && !M[tt] && !prime[tt]){
            Q.push(mp(tt, ct + 1)), M[tt] = 1;
          }
        }
      }
    }
    if(!flag) printf("impossible\n");
  }
}
