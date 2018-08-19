#include <cstdio>
//몫과 나머지를 이용한 풀이(비트마스킹)
//몫은 인덱스로 나머지는 비트로
int num[(1 << 25) / 32], a;
int main(){
  while (~scanf("%d", &a)) {
    int mok = a / 32, mod = 1 << (a % 32);
    if(!(num[mok] & mod)){
      num[mok] += mod;
      printf("%d ", a);
    }
  }
}
