#include <cstdio>
using namespace std;
int n, a, arr[1001], cur = 1, check[1001];
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++)
    scanf("%d", &arr[i]);
  check[1] = 1;
  printf("1 ");
  int tar = arr[1];
  for(int i = 1;i < n;i++){
    int cnt = 0;
    if(tar > 0){
      while(cnt < tar){
        cur++;
        if(cur > n) cur = 1;
        if(!check[cur]) cnt++;
      }
    }
    else{
      while(cnt > tar){
        cur--;
        if(cur <= 0) cur = n;
        if(!check[cur]) cnt--;
      }
    }
    tar = arr[cur];
    printf("%d ", cur); check[cur] = 1;
  }
}
