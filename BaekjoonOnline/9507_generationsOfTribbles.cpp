#include <cstdio>
long long koong[68];
int main(){
  long long t, n;
  scanf("%lld", &t);
  for(int i = 0;i <= 67;i++){
    if(i < 2) koong[i] = 1;
    else if(i == 2) koong[i] = 2;
    else if(n == 3) koong[i] = 4;
    else koong[i] = koong[i - 1] + koong[i - 2] + koong[i - 3] + koong[i - 4];
  }
  while(t--){
    scanf("%lld", &n);
    printf("%lld\n", koong[n]);
  }
}
