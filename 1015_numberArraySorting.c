#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0));
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	int A[n], B[n];
	for(i = 0;i < n;i++){
		scanf("%d", &A[i]);
		B[i] = A[i];
	}
	qsort(B, n, sizeof(B[0]), compare);
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			if(A[i] == B[j]){
				B[j] = -1;
				printf("%d ", j);
				break;
			}
		}
	}
}