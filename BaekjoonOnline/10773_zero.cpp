#include <cstdio>
int n, cnt, arr[100001], a;
long long sum;
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++){
    scanf("%d", &a);
    if(a){
      arr[cnt] = a; cnt++;
    }
    else{
      arr[cnt - 1] = 0; cnt--;
    }
  }
  for(int i = 0;i < cnt;i++)  sum += arr[i];
  printf("%lld\n", sum);
}
