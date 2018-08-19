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
	int max = arr[n - 1];
	for(i = n - 1;i >= 0;i--){
		int temp = arr[i] * (n - i);
		if(temp > max)
			max = temp;
	}
	printf("%d\n", max);
}