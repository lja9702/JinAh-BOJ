#include <cstdio>
#include <cstring>
char arr[120];
int abs(int a){
  if(a > 0) return a;
  return -a;
}
int main(){
  int gap, cnt = 0;
  scanf("%d %s", &gap, arr);
  int cur = strlen(arr);
  for(int i = 0;i < strlen(arr);i++){
    if(arr[i] == 'W' && abs(cnt - 1) <= gap)  cnt--;
    else if(arr[i] == 'M' && abs(cnt + 1) <= gap) cnt++;
    else if(arr[i + 1] == 'W' && abs(cnt - 1) <= gap){
      cnt--;
      if(arr[i] == 'M' && abs(cnt + 1) <= gap)  cnt++, i++;
      else{
        cur = i;  break;
      }
    }
    else if(arr[i + 1] == 'M' && abs(cnt + 1) <= gap){
      cnt++;
      if(arr[i] == 'W' && abs(cnt - 1) <= gap)  cnt--, i++;
    }
    else{
      cur = i; break;
    }
  }
  printf("%d\n", cur);
}
