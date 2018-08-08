#include <stdio.h>
#include <string.h>
int main(){
	int i, j;
	char arr[11] = {0, };
	scanf("%s", &arr);
	for(i = 0;i<strlen(arr);i++){
		for(j = 0;j<strlen(arr)-1;j++){
			if(arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("%s\n", arr);
}