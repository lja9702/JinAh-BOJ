#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i;
	scanf("%d", &arr[0]);
	int max = arr[0], min = arr[0];
	for(i = 1;i < n;i++){
		scanf("%d", &arr[i]);
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
	}
	printf("%d\n", min * max);
}