#include <stdio.h>
#include <string.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		char arr1[21] = {0}, arr2[21] = {0};
		scanf("%s %s", &arr1, &arr2);
		printf("Distances: ");
		for(j = 0;j < strlen(arr1);j++){
			if(arr2[j] >= arr1[j])
				printf("%d ", arr2[j] - arr1[j]);
			else
				printf("%d ", arr2[j] + 26 - arr1[j]);
		}
		printf("\n");
	}
}