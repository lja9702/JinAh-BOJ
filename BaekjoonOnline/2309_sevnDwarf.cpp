#include <cstdio>
#include <algorithm>
int sum, arr[10];
bool flag = 0;
int main(){
  for(int i = 0;i < 9;i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  for(int i = 0;i < 8;i++){
    for(int j = i + 1;j < 9;j++){
      int temp = arr[i] + arr[j];
      if(sum - temp == 100){
        arr[i] = 0, arr[j] = 0;
        flag = 1;
      }
      if(flag)  break;
    }
    if(flag)  break;
  }
  std::sort(arr, arr + 9);
  for(int i = 2;i < 9;i++)
    printf("%d\n", arr[i]);
}
