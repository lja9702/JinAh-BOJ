#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i;
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	int sum = arr[0];
	printf("%d ", sum);
	for(i = 1;i < n;i++){
		arr[i] = (i+1) * arr[i] - sum;
		printf("%d ", arr[i]);
		sum += arr[i];
	}
}