#include <stdio.h>

int main(){
	int n, num = 10;
	scanf("%d", &n);
	for(;n > num; num *= 10){
		if(n % num >= num / 2)
			n += (num - n % num);
		else
			n -= (n % num);
	}
	printf("%d\n", n);
}