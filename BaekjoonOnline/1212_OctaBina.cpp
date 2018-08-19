#include <cstdio>
#include <cstring>
char arr[340000];
int num[1100000];
int main(){
  scanf(" %s", arr);
  int len = strlen(arr);
  if(len == 1 && arr[0] == '0'){
    printf("0\n");
    return 0;
  }
  for(int i = 0;i < len;i++){
    int temp = arr[i] - '0', cur = 2;
    while(temp && cur >= 0){
      num[3 *i + cur] = temp % 2;
      temp /= 2, cur--;
    }
  }
  int cur = 0;
  while(!num[cur])  cur++;
  for(int i = cur;i < len * 3;i++)
    printf("%d", num[i]);
  printf("\n");
}
