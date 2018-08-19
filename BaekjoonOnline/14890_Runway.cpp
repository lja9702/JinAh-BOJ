#include <cstdio>
int n, l, arr[101][101], cnt;
int main(){
  scanf("%d %d", &n, &l);
  for(int i = 1;i <= n;i++){
      for(int j = 1;j <= n;j++)
        scanf("%d", &arr[i][j]);
  }
  for(int i = 1;i <= n;i++){
    int flag = 1, check[101] = {0};
    for(int j = 2;j <= n;j++){
      if(arr[i][j - 1] != arr[i][j]){
        if(arr[i][j] - arr[i][j - 1] == 1){
          int cur = 0, temp = arr[i][j - 1];
          while(cur < l && j - 1 - cur >= 0){
            if(check[j - 1 - cur] || temp != arr[i][j - 1 - cur]){
              flag = 0;
              break;
            }
            check[j - 1 - cur] = 1;
            cur++;
          }
        }
        else if(arr[i][j - 1] - arr[i][j] == 1){
          int cur = 0, temp = arr[i][j];
          while(cur < l){
            if(j + cur > n || check[j + cur] || temp != arr[i][j + cur]){
              flag = 0;
              break;
            }
            check[j + cur] = 1;
            cur++;
          }
        }
        else{
          flag = 0;
          continue;
        }
      }
    }
    if(flag){
      cnt++;
    }
  }
  for(int j = 1;j <= n;j++){
    int flag = 1, check[101] = {0};
    for(int i = 2;i <= n;i++){
      if(arr[i - 1][j] != arr[i][j]){
        if(arr[i][j] - arr[i - 1][j] == 1){
          int cur = 0, temp = arr[i - 1][j];
          while(cur < l && i - 1 - cur >= 0){
            if(check[i - 1 - cur] || temp != arr[i- 1 - cur][j]){
              flag = 0;
              break;
            }
            check[i - 1 - cur] = 1;
            cur++;
          }
        }
        else if(arr[i - 1][j] - arr[i][j] == 1){
          int cur = 0, temp = arr[i][j];
          while(cur < l){
            if(i + cur > n || check[i + cur] || temp != arr[i + cur][j]){
              flag = 0;
              break;
            }
            check[i + cur] = 1;
            cur++;
          }
        }
        else{
          flag = 0;
          continue;
        }
      }
    }
    if(flag){
      cnt++;
    }
  }
  printf("%d\n", cnt);
}
