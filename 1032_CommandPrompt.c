#include <stdio.h>
#include <string.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	char arr[50][51] = {0};
	for(i = 0;i < n;i++)
		scanf("%s", &arr[i]);
	int temp[51] = {0};
	for(i = 0;i < n;i++){
		for(j = 0;j < strlen(arr[0]);j++){
			if(arr[0][j] == arr[i][j])
				temp[j]++;
		}
	}
	for(i = 0;i < strlen(arr[0]);i++){
		if(temp[i] == n)
			printf("%c", arr[0][i]);
		else
			printf("?");
	}
}