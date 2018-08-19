#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare (const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0));
}

int main(){
	int n, m, i;
	scanf("%d %d", &n, &m);
	int arr[n+m];
	for(i = 0;i < n + m;i++)
		scanf("%d", &arr[i]);
	qsort(arr, n+m, sizeof(int), compare);
	for(i = 0;i < n + m;i++)
		printf("%d ", arr[i]);
}