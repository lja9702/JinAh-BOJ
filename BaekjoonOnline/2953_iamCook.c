#include <stdio.h>

int main(){
	int i, j, arr[5][5] = {0};
	for(i = 0;i <5;i++){
		for(j = 0;j < 4;j++){
			scanf("%d", &arr[i][j]);
			arr[i][4] += arr[i][j];
		}
	}
	int max = 0;
	for(i = 0;i < 5;i++){
		if(arr[max][4] < arr[i][4])
			max = i;
	}
	printf("%d %d\n", max + 1, arr[max][4]);
}