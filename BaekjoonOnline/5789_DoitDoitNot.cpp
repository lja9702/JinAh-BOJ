#include <cstdio>
#include <cstring>
int n;
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++){
    char arr[1001] = {0};
    scanf(" %s", arr);
    if(arr[strlen(arr) / 2 - 1] == arr[strlen(arr) / 2])
      printf("Do-it\n");
    else
      printf("Do-it-Not\n");
  }
}
