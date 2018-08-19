#include <stdio.h>

int main(){
	int n, i;
	long long a = 0, b = 1;
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		a += b;
		b = a - b;
	}
	printf("%lld\n", a);
}