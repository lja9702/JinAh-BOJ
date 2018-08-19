#include <cstdio>
#include <cstring>
int n, m, score[101], a, max = -1, res;
int main(){
  scanf("%d %d", &n, &m);
  for(int i = 1;i <= n;i++) scanf("%d", &score[i]);
  for(int i = 0;i < m;i++){
    int sum = 0, cnt = 0;
    char str[300] = {0};
    scanf("%d", &a);
    fgets(str, sizeof(str), stdin);
    for(int j = 0;j < strlen(str);j++){
      if(str[j] == 'O'){
        cnt++;
        sum += score[cnt];
      }
      else if(str[j] == 'X')  cnt++;
    }
    if(sum > max)  max = sum, res = a;
    else if(sum == max && res > a)   res = a;
  }
  printf("%d %d\n", res, max);
}
