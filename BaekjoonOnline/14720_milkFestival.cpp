#include <cstdio>

int main(){
  int t = 1, res = 0, arr[1001] = {0}, n, sw = 0;
  scanf("%d", &n);
  for(int i = 1;i <= n;i++)
    scanf("%d", &arr[i]);
  while(arr[t] != 0)  t++;
  while(t <= n){
    if(sw == 0 && arr[t] == 0)  res++, sw = 1;
    else if(sw == 1 && arr[t] == 1) res++, sw = 2;
    else if(sw == 2 && arr[t] == 2) res++, sw = 0;
    t++;
  }
  printf("%d\n", res);
}
