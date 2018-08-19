#include <cstdio>
#include <algorithm>
int n, m, arr[51][51], res = 1 << 29;
char temp[51][51];
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 0;i < n;i++){
    scanf(" %s", temp[i]);
    for(int j = 0;j < m;j++){
      if(temp[i][j] == 'B') arr[i][j] = 1;
      else  arr[i][j] = 0;
    }
  }
  for(int i = 0;i < n - 8 + 1;i++){
    for(int j = 0;j < m - 8 + 1;j++){
      int col = arr[i][j], temp = 0;
      for(int p = i;p < i + 8;p++){
        for(int q = j;q < j + 8;q++){
          if(((p - i) % 2 == 0 && (q - j) % 2 == 0) || ((p - i) % 2 == 1 && (q - j) % 2 == 1)){
            if(col != arr[p][q])  temp++;
          }
          else{
            if(col == arr[p][q])  temp++;
          }
        }
      }
      res = std::min(res, std::min(temp, 64 - temp));
    }
  }
  printf("%d\n", res);
}
