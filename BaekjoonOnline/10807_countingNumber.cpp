#include <cstdio>
int n, arr[101], m, cnt;
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)  scanf("%d", &arr[i]);
  scanf("%d", &m);
  for(int i = 0;i < n;i++){
    if(m == arr[i]) cnt++;
  }
  printf("%d\n", cnt);
}
