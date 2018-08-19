#include <stdio.h>

int main(){
	int i, N;
	long long result = 1;
	scanf("%d", &N);
	for(i = 1;i<=N;i++)
		result *= i;
	printf("%d\n", result);
}