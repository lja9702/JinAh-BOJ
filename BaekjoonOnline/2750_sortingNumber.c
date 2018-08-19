#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0));
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i;
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	for(i = 0;i < n - 1;i++){
		if(arr[i] != arr[i+1])
			printf("%d\n", arr[i]);
	}
	printf("%d\n", arr[i]);
}