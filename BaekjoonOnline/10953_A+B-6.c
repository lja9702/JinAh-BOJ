#include <stdio.h>

int main(){
	int T, i;
	scanf("%d", &T);
	for(i = 0;i < T;i++){
		int A, B;
		char comma;
		scanf("%d %c %d", &A, &comma, &B);
		printf("%d\n", A+B);
	}
	return 0;
}