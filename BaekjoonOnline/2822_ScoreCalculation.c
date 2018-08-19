#include <stdio.h>

int main(){
	int arr[8], check[8] = {0, }, sum = 0, i, j;

	for(i = 0;i<8;i++)
		scanf("%d", &arr[i]);

	for(i = 0;i<5;i++){
		int maxIndex = 0;
		for(j = 0;j<8;j++){
			if(arr[maxIndex] < arr[j])
				maxIndex = j;
		}
		check[maxIndex] = 1;
		sum += arr[maxIndex];
		arr[maxIndex] = 0;
	}
	printf("%d\n", sum);
	for(i = 0;i < 8;i++){
		if(check[i] != 0)
			printf("%d ", i+1);
	}
}