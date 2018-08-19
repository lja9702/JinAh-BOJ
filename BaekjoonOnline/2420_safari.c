#include <stdio.h>
#include <stdlib.h>
int main(){
	long n, m, temp;
	scanf("%ld %ld", &n, &m);
	if(n < m)
		temp = m - n;
	else
		temp = n - m;
	printf("%ld\n", temp);
}