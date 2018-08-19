#include <stdio.h>
#include <string.h>
int main(){
	char arr[101] = {0};
	int i;
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr);i++){
		if(arr[i] >= 'A' && arr[i] <= 'Z')
			printf("%c", arr[i]);
	}
	printf("\n");
}