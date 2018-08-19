#include <cstdio>
#include <cstring>
int fail[2000010], lenR, lenC, ja, mo;
char roulette[2000010], comp[1000010];
int gcd(int a, int b){
  if(!b)  return a;
  else  return gcd(b, a % b);
}
void makeFail(){
  for(int i = 1, j = 0;i < lenC;i++){
    while(j > 0 && comp[i] != comp[j])
      j = fail[j - 1];
    if(comp[i] == comp[j])  fail[i] = ++j;
  }
}
void KMP(){
  for(int i = 0, j = 0;i < lenR;i++){
    while(j > 0 && roulette[i] != comp[j])
      j = fail[j - 1];
    if(roulette[i] == comp[j]){
      if(j == lenC - 1){
        ja++;
        j = fail[j];
      }
      else  j++;
    }
  }
}
int main(){
  int cnt = 0;
  scanf("%d", &mo);
  for(int i = 0;i < mo * 2;i++){
    char a;
    scanf("%c", &a);
    if(a != ' ' && a != '\n')  roulette[cnt++] = a;
  }
  for(int i = mo;i < mo * 2 - 1;i++)  roulette[i] = roulette[i - mo];
  cnt = 0;
  for(int i = 0;i < mo * 2;i++){
    char a;
    scanf("%c", &a);
    if(a != ' ' && a != '\n')  comp[cnt++] = a;
  }
  lenR = strlen(roulette), lenC = strlen(comp);
  makeFail();
  KMP();
  int mod = gcd(ja, mo);
  printf("%d/%d\n", ja / mod, mo / mod);
}
