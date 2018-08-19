#include <stdio.h>

int main(){
	int N, i;
	int num, sum = 0;
	scanf("%d", &N);
	for(i = 0;i<N;i++){
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d", sum);
	return 0;
}