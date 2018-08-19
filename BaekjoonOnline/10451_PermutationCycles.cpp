#include <cstdio>
#include <cstring>
using namespace std;
int t, n, arr[1001];
int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    bool vist[1001] = {0};
    int cnt = 0;
    for(int i = 1;i <= n;i++)
      scanf("%d", &arr[i]);
    for(int i = 1;i <= n;i++){
      if(!vist[i]){
        cnt++;
        int temp = i;
        while(!vist[temp]){
          vist[temp] = 1;
          temp = arr[temp];
        }
      }
    }
    printf("%d\n", cnt);
  }
}
