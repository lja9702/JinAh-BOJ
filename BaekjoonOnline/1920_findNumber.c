#include <stdio.h>
#include <stdlib.h>
int binarySearch(int, int, int, int*);

int compare(const void* a, const void* b){
	return (*(int*)a > *(int*)b ? 1 : (*(int*)a < *(int*)b ? -1 : 0));
}

int main(){
	int N, M, i, j;
	scanf("%d", &N);
	int A[N];
	for(i = 0;i < N;i++)
		scanf("%d", &A[i]);
	qsort(A, N, sizeof(int), compare);

	scanf("%d", &M);
	int B[M];
	for(i = 0;i < M;i++){
		scanf("%d", &B[i]);
		if(binarySearch(0, N-1, B[i], A) != -1)
			printf("1\n");
		else
			printf("0\n");
	}
}

int binarySearch(int left, int right, int tar, int arr[]){
	if(right < left)
		return -1;
	else{
		int mid = (left + right) / 2;
		if(tar == arr[mid])
			return mid;
		else if(tar < arr[mid])
			return binarySearch(left, mid - 1, tar, arr);
		else
			return binarySearch(mid + 1, right, tar, arr);
	}
}