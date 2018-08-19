#include <cstdio>
#include <cstring>
int n, t, num[1001];
bool alpha[27];
int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    memset(num, -1, sizeof(num));
    memset(alpha, 0, sizeof(alpha));
    while(n--){
      char c;
      int a, b;
      scanf(" %c %d %d", &c, &a, &b);
      if(!alpha[c - 'A']){
        for(int i = a;i < b;i++)  num[i]++;
        alpha[c - 'A'] = 1;
      }
      else  alpha[c - 'A'] = 0;
    }
    for(int i = 0;i < 1001;i++){
      if(num[i] != -1)  printf("%c", num[i] + 'A');
    }
    printf("\n");
  }
}
