#include <stdio.h>
long long a, b, c;
long long mul(long long a, long long b){
	if(b == 0)	return 1;
	long long temp = mul(a, b / 2);
	long long res = temp * temp % c;
	if(b % 2)	res = res * a % c;
	return res;
}

int main(){
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", mul(a, b));
}
