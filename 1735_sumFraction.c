#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
	while (b != 0) {
   	int temp = a % b;
   	a = b;
  		b = temp;
  }
  return abs(a);
}

int main(){
	int numer1, deno1, numer2, deno2;
	int tempNumer, tempDeno;
	scanf("%d %d %d %d", &numer1, &deno1, &numer2, &deno2);
	tempNumer = (numer1*deno2 + numer2*deno1);
	tempDeno = deno2*deno1;
	printf("%d %d\n", tempNumer/gcd(tempNumer,tempDeno), tempDeno/gcd(tempNumer, tempDeno));
}