#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	return (*(long long*) a > *(long long*) b ? 1 : (*(long long*) a < *(long long*) b ? -1 : 0));
}
int main(){
	int i;
	long long n, arr[10001] = {0}, res[4] = {0};
	scanf("%lld", &n);
	for(i = 0;i < n;i++){
		scanf("%lld", &arr[i]);
	}
	qsort(arr, n, sizeof(long long), compare);
	res[0] = arr[0] * arr[1] * arr[n - 1];
	res[1] = arr[n - 1] * arr[n - 2] * arr[n - 3];
	res[2] = arr[0] * arr[1];
	res[3] = arr[n - 1] * arr[n - 2];
	qsort(res, 4, sizeof(long long), compare);
	printf("%lld", res[3]);
}