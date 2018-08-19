#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	return (*(long long*) a > *(long long*) b ? 1 : (*(long long*) a < *(long long*) b ? -1 : 0));
}
int main(){
	int N, i;
	scanf("%d", &N);
	long long arr[N], check[N][2];
	for(i = 0;i < N;i++){
		scanf("%lld", &arr[i]);
		check[i][0] = 0;
		check[i][1] = 0;
	}
	qsort(arr, N, sizeof(long long), compare);
	check[0][0] = arr[0];
	check[0][1] = 1;
	int idx = 0;
	for(i = 1;i < N;i++){
		if(check[idx][0] == arr[i])
			check[idx][1]++;
		else{
			check[++idx][0] = arr[i];
			check[idx][1]++;
		}
	}

	int max = 0;
	for(i = 0;i < N;i++){
		if(check[max][1] < check[i][1])
			max = i;
	}
	printf("%lld\n", check[max][0]);
}