#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	int *x1 = (int*) a, *y1 = (int*) a + 1;
	int *x2 = (int*)b, *y2 = (int*)b + 1;
	if(*y1 > *y2)	return 1;
	else if(*y1 < *y2)	return -1;
	else{
		if(*x1 > *x2)	return 1;
		else if(*x1 < *x2)	return -1;
		else	return 0;
	}
}

int main(){
	int n, i;
	scanf("%d", &n);
	int arr[n][2];
	for(i = 0;i < n;i++)
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	qsort(arr, n, sizeof(arr[0]), compare);
	for(i = 0;i < n;i++)
		printf("%d %d\n", arr[i][0], arr[i][1]);
}