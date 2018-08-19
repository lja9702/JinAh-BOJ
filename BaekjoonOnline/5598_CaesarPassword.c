#include <stdio.h>
#include <string.h>
int main(){
	char arr[1001] = {0};
	int i;
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr);i++){
		if(arr[i] >= 'A' && arr[i] <= 'C')
			printf("%c", arr[i] + 23);
		else
			printf("%c", arr[i] - 3);
	}
	printf("\n");
}