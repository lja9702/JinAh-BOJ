#include <stdio.h>

int main(){
	int n, i, A[3];
	scanf("%d", &n);
	for(i = 0;i<n;i++)
		scanf("%d", &A[i]);
	if(n == 2){
		for(i = 1;i <= A[0]; i++){
			if(A[0] % i == 0 && A[1] % i == 0)
				printf("%d\n", i);
		}
	}
	if(n == 3){
		for(i = 1;i <= A[0]; i++){
			if(A[0] % i == 0 && A[1] % i == 0 && A[2] % i == 0)
				printf("%d\n", i);
		}
	}
}