#include <stdio.h>

int main(){
	int sum, temp, i;
	scanf("%d", &sum);
	for(i = 0;i<9;i++){
		scanf("%d", &temp);
		sum -= temp;
	}
	printf("%d\n", sum);
}