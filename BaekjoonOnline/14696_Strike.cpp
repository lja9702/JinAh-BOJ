#include <cstdio>

int main(){
  int t, n, temp;
  scanf("%d", &t);
  while(t--){
    int a[5] = {0}, b[5] = {0};
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
      scanf("%d", &temp);
      a[temp]++;
    }
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
      scanf("%d", &temp);
      b[temp]++;
    }
    if(a[4] > b[4]) printf("A\n");
    else if(a[4] < b[4])  printf("B\n");
    else{
      if(a[3] > b[3]) printf("A\n");
      else if(a[3] < b[3])  printf("B\n");
      else{
        if(a[2] > b[2]) printf("A\n");
        else if(a[2] < b[2])  printf("B\n");
        else{
          if(a[1] > b[1]) printf("A\n");
          else if(a[1] < b[1])  printf("B\n");
          else  printf("D\n");
        }
      }
    }
  }
}
