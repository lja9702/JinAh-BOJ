#include <cstdio>
#include <cstring>
#include <algorithm>
char arr[5001];
int fail[5001], res;
int main(){
  scanf("%s", arr);
  int len = strlen(arr);
  for(int i = 0;i < len;i++){
    memset(fail, 0, sizeof(fail));
    for(int j = i + 1, k = 0;j < len;j++){
      while(k && arr[k + i] != arr[j])
        k = fail[k - 1];
      if(arr[j] == arr[k + i]){
        fail[j - i] = ++k;
        res = std::max(fail[j - i], res);
      }
    }
  }
  printf("%d\n", res);
}
