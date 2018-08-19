#include <cstdio>
#include <cstring>
char arr[1050], temp[5] = {'U', 'C', 'P', 'C'};
int cur;
int main(){
  fgets(arr, sizeof(arr), stdin);
  int len = strlen(arr);
  bool flag = 0;
  for(int i = 0;i < len;i++){
    if(cur > 3){
      flag = 1;
      break;
    }
    if(arr[i] == temp[cur])
      cur++;
  }
  if(flag)  printf("I love UCPC\n");
  else  printf("I hate UCPC\n");
}
