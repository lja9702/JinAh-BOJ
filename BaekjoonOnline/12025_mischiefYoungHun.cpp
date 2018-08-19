#include <cstdio>
#include <cstring>
char arr[61];
int check[61];
long long k;
long long pow(int t){
  long long res = 1;
  while(t--)  res <<= 1;
  return res;
}
int main(){
  scanf("%s %lld", arr, &k);
  int len = strlen(arr), cnt = 0;
  for(int i = 0;i < len;i++){
    if(arr[i] == '1' || arr[i] == '2' || arr[i] == '6' || arr[i] == '7')
      check[cnt++] = i;
    if(arr[i] == '6') arr[i] = '1';
    else if(arr[i] == '7')  arr[i] = '2';
  }
  long long temp = cnt - 1, comp = pow(cnt);
  if(k > comp){
    printf("-1\n");
    return 0;
  }
  k -= 1;
  while(k){
    if(k % 2) arr[check[temp]] += 5;
    k /= 2, temp--;
  }
  printf("%s\n", arr);
}
