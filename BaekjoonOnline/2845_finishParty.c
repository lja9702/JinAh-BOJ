#include <stdio.h>

int main(){
	int l, p, i;
	scanf("%d %d", &l, &p);
	int sum = l * p, arr[5];
	for(i = 0;i < 5;i++){
		scanf("%d", &arr[i]);
		arr[i] -= sum;
	}
	for(i = 0;i < 5;i++)
		printf("%d ", arr[i]);
}