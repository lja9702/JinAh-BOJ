#include <stdio.h>
#include <string.h>
int main(){
	char arr[10001] = {0};
	int i, j, cntJ = 0, cntI = 0;
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr) - 2;i++){
		if(arr[i] == 'J' && arr[i+1] == 'O' && arr[i+2] == 'I')
			cntJ++;
		if(arr[i] == 'I' && arr[i+1] == 'O' && arr[i+2] == 'I')
			cntI++;
	}
	printf("%d\n%d\n", cntJ, cntI);
}