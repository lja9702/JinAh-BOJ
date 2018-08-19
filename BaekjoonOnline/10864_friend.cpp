#include <cstdio>
int n, m, arr[100001];
int main(){
  scanf("%d %d", &n, &m);
  while(m--){
    int a, b;
    scanf("%d %d", &a, &b);
    arr[a]++, arr[b]++;
  }
  for(int i = 1;i <= n;i++) printf("%d\n", arr[i]);
}
