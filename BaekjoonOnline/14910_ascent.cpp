#include <cstdio>
int arr[1000001], n, tot;
int main(){
  while(~scanf("%d", &n)) arr[tot++] = n;
  for(int i = 1;i < tot;i++){
    if(arr[i - 1] > arr[i]){
      printf("Bad\n");
      return 0;
    }
  }
  printf("Good\n");
}
