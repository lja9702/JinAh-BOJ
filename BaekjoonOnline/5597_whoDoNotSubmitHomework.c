#include <stdio.h>

int main(){
	int num[31] = {0, }, n, i;
	for(i = 0;i < 28;i++){
		scanf("%d", &n);
		num[n] = 1;
	}
	for(i = 1;i<=30;i++){
		if(num[i] == 0)
			printf("%d\n", i);
	}
}