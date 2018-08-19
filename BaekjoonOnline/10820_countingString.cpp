#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
  string str;
  while(getline(cin, str,'\n')){
    int sz = str.size(), cnt[4] = {0};
    for(int i = 0;i < sz;i++){
      if(str[i] >= 'a' && str[i] <= 'z')  cnt[0]++;
      else if(str[i] >= 'A' && str[i] <= 'Z') cnt[1]++;
      else if(str[i] >= '0' & str[i] <= '9')  cnt[2]++;
      else cnt[3]++;
    }
    printf("%d %d %d %d\n", cnt[0], cnt[1], cnt[2], cnt[3]);
  }
}
