#include <cstdio>
int arr[1000001], n, tot, cnt;
int main(){
  while(~scanf("%d", &n)) arr[tot++] = n;
  for(int i = 0;i < tot;i++){
    if(arr[i] > 0)  cnt++;
  }
  printf("%d\n", cnt);
}
