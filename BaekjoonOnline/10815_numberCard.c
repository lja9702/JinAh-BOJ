#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0));
}

int binarySearch(int left, int right, int target, int* arr){
	if(left > right)
		return -1;
	else{
		int mid = (left + right) / 2;
		if(arr[mid] == target)
			return mid;
		else if(target < arr[mid])
			return binarySearch(left, mid - 1, target, arr);
		else
			return binarySearch(mid + 1, right, target, arr);
	}
}

int main(){
	int N, M, i;
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
			printf("1 ");
		else
			printf("0 ");
	}
}
