#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? -1 : (*(int*) a < *(int*) b ? 1 : 0));
}
int main(){
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	for(i = 0;i < n;i++)
		printf("%d\n", arr[i]);
}