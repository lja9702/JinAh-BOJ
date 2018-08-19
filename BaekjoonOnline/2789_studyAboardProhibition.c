#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char arr[101] = {0};
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr);i++){
		if(arr[i] != 'C' && arr[i] != 'A' && arr[i] != 'M' && arr[i] != 'B' &&
			arr[i] != 'R' && arr[i] != 'I' && arr[i] != 'D' && arr[i] != 'G' && arr[i] != 'E')
			printf("%c", arr[i]);
	}
}