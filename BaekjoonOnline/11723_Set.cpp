#include <cstdio>
#include <cstring>
using namespace std;
bool check[21];
int main(){
  int m, a;
  scanf("%d", &m);
  while(m--){
    char arr[11];
    scanf(" %s", arr);
    if(!strcmp(arr, "all")){
      for(int i = 1;i <= 20;i++)  check[i] = 1;
    }
    else if(!strcmp(arr, "empty"))
      memset(check, 0, sizeof(check));
    else{
      scanf("%d", &a);
      if(!strcmp(arr, "add"))  check[a] = 1;
      else if(!strcmp(arr, "remove"))  check[a] = 0;
      else if(!strcmp(arr, "check")){
        if(check[a])  printf("1\n");
        else  printf("0\n");
      }
      else if(!strcmp(arr, "toggle")){
        if(check[a])  check[a] = 0;
        else  check[a] = 1;
      }
    }
  }
}
