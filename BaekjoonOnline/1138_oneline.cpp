#include <cstdio>
int n, res[11], big[11];
int main(){
  scanf("%d", &n);
  for(int i = 1;i <= n;i++) scanf("%d", &big[i]);
  for(int i = 1;i <= n;i++){
    int cnt = 0;
    for(int j = 1;j <= n;j++){
      if(cnt == big[i] && !res[j]){
        res[j] = i;
        break;
      }
      if(!res[j]) cnt++;
    }
  }
  for(int i = 1;i <= n;i++)
    printf("%d ", res[i]);
  printf("\n");
}
