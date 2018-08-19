#include <stdio.h>

int main(){
	int i, n, k, j;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d", &k);
		for(j = 0;j < k;j++)
			printf("=");
		printf("\n");
	}
}