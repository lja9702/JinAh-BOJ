#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i, j, temp, S = 0;
	scanf("%d", &N);
	int A[N], B[N];

	for(i = 0;i < N;i++)
		scanf("%d", &A[i]);
	for(i = 0;i < N;i++)
		scanf("%d", &B[i]);

	for(i = 0 ; i< N ; i++){
		for(j = 0 ; j < N-1 ; j++){
			if(A[j] > A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}

			if(B[j] < B[j+1]){
				temp = B[j];
				B[j] = B[j+1];
				B[j+1] = temp;
			}
		}
	}

	for(i = 0; i < N; i++)
		S += (A[i]*B[i]);
	printf("%d", S);
	return 0;
}