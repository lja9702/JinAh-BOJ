#include <stdio.h>
int main(){
	long long i, j;
	scanf("%lld %lld", &i, &j);
	long long temp = j - i;
	if(j - i < 0)	temp = i - j;
	printf("%lld\n", ( i + j ) * (temp + 1) / 2);
}