#include <stdio.h>

int main(){
	int i, j, arr[3] = {0};
	for(i = 0;i < 3;i++)
		scanf("%d", &arr[i]);
	for(i = 0;i < 3;i++){
		for(j = 0;j < 2;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i = 0;i < 3;i++)
		printf("%d ", arr[i]);
}