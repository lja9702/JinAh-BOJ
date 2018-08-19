#include <cstdio>
#define MAX 100000
bool prime[MAX + 1];
int n, sumA[MAX + 1], sumB[MAX + 1], idx, a, b, check[MAX + 1];
void primeF(){
  prime[1] = 1;
  for(int i = 2;i * i <= MAX;i++){
    if(!prime[i]){
      for(int j = i * 2;j <= MAX;j += i)
        prime[j] = 1;
    }
  }
}
int main(){
  int cnt = 0;
  scanf("%d", &n);
  primeF();
  for(int i = 1;i <= MAX;i++){
    if(!prime[i]){
      if(cnt % 2) sumA[i] = i * 3, sumB[i] = -i;
      else  sumA[i] = -i, sumB[i] = i * 3;
      check[i] = cnt % 2;
      cnt++;
    }
    sumA[i] += sumA[i - 1], sumB[i] += sumB[i - 1];
  }
  while(n--){
    scanf("%d %d", &a, &b);
    while(prime[a])  a++;
    if(!check[a]) printf("%d\n", sumB[b] - sumB[a - 1]);
    else  printf("%d\n", sumA[b] - sumA[a - 1]);
  }
}
