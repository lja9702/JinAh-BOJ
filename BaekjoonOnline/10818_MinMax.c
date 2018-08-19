#include <stdio.h>

int main(){
	int i, n, min, max;
	scanf("%d", &n);
	int arr[n];
	scanf("%d", &arr[0]);
	min = arr[0], max = arr[0];
	for(i = 1;i < n;i++){
		scanf("%d",&arr[i]);
		if(min > arr[i])
			min = arr[i];
		if(max < arr[i])
			max = arr[i];
	}
	printf("%d %d\n", min, max);
}