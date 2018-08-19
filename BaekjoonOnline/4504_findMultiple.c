#include <stdio.h>

int main(){
	int n, i, num;
	scanf("%d", &n);
	while(1){
		scanf("%d", &num);
		if(num == 0)
			return ;
		if(num % n)
			printf("%d is NOT a multiple of %d.\n", num, n);
		else
			printf("%d is a multiple of %d.\n", num, n);
	}
}
