#include <stdio.h>
#include <string.h>

int main(){
	int n, i = 0;
	char patten[101] = {0}, arr1[51] = {0}, arr2[51] = {0};
	scanf("%d", &n);
	scanf("%s", &patten);
	while(patten[i] != '*')
		arr1[i] = patten[i], i++;
	int idx = 0;
	while(++i < strlen(patten))
		arr2[idx++] = patten[i];
	for(i = 0;i < n;i++){
		char arr[101] = {0};
		int check = 1, j;
		scanf("%s", &arr);
		if(strlen(arr1) + strlen(arr2) > strlen(arr)){
			printf("NE\n");
			continue;
		}
		for(j = 0;j < strlen(arr1);j++){
			if(arr1[j] != arr[j]){
				printf("NE\n");
				check = 0;
				break;
			}
		}
		if(check == 1){
			for(j = 0;j < strlen(arr2);j++){
				if(arr2[j] != arr[strlen(arr) - strlen(arr2) + j]){
					printf("NE\n");
					check = 0;
					break;
				}
			}
			if(check == 1)
				printf("DA\n");
		}
	}
}