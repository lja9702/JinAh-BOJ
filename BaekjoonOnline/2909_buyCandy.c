#include <stdio.h>

int main(){
	int n, k, i, num = 1;
	scanf("%d %d", &n, &k);
	for(i = 1;i <= k;i++){
		num *= 10;
	}
	if(n % num >= num / 2)
		n += (num - n % num);
	else
		n -= (n % num);
	printf("%d\n", n);
}