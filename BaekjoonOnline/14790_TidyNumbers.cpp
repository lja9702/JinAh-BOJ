#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(){
  int t;
  scanf("%d", &t);
  for(int j = 1;j <= t;j++){
    char n[25] = {0};
    scanf("%s", n);
    long long nm = atoll(n);
    for(int i = 0;i <= nm;i++){
      bool flag = 0;
      long long temp = nm - i, tt = temp % 10;
      while(temp){
        temp /= 10;
        if(tt < temp % 10)
          flag = 1;
        tt = temp % 10;
      }
      if(!flag){
        printf("Case #%d: %lld\n", j, nm - i);
        break;
      }
    }
  }
}
