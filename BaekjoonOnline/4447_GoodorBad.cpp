#include <cstdio>
#include <cstring>
int main(){
  int n;
  scanf("%d", &n);
  getchar();
  while(n--){
    char arr[30] = {0};
    int g = 0, b = 0;
    fgets(arr, sizeof(arr), stdin);
    arr[strlen(arr) - 1] = '\0';  
    int len = strlen(arr);
    for(int i = 0;i < len;i++){
      if(arr[i] == 'g' || arr[i] == 'G')  g++;
      else if(arr[i] == 'b' || arr[i] == 'B') b++;
    }
    if(g > b) printf("%s is GOOD\n", arr);
    else if(g < b)  printf("%s is A BADDY\n", arr);
    else  printf("%s is NEUTRAL\n", arr);
  }
}
