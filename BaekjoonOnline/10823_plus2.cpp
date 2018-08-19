#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
long long num;
char a, arr[10010];
int cur = 0;
int main(){
  while(~scanf("%c", &a)){
    if(a != '\n') arr[cur++] = a;
  }
  char* str = strtok(arr, ",");
  while(str != NULL){
    num += atoi(str);
    str = strtok(NULL, ",");
  }
  printf("%lld\n", num);
}
