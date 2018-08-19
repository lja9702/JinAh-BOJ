#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	if(*(int*) a > *(int*) b)
		return 1;
	else if(*(int*) a < *(int*) b)
		return -1;
	else{
		int *a2 = (int*) a + 1, *b2 = (int*) b + 1;
		return (*a2 > *b2 ? 1 : (*a2 < *b2 ? -1 : 0));
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