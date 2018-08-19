#include <cstdio>
int t, n, arr[47], sum;
int main(){
  scanf("%d", &t);
  for(int i = 1;i < 47;i++)
    arr[i] = i * (i + 1) / 2;
  while(t--){
    int fl = 0;
    scanf("%d", &n);
    for(int i = 1;i < 46;i++){
      for(int j = 1;j < 46;j++){
        for(int k = 1;k < 46;k++){
          if(arr[i] + arr[j] + arr[k] == n) fl = 1;
        }
      }
    }
    printf("%d\n", fl);
  }
}
