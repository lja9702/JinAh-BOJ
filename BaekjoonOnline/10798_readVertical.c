#include <stdio.h>

int main(){
	char arr[5][16] ={0, };
	int i, j;
	for(i = 0;i<5;i++)
		scanf("%s", arr[i]);
	for(j = 0;j<16;j++){
		for(i = 0;i<5;i++){
			if(arr[i][j] == NULL)
				continue;
			else
				printf("%c", arr[i][j]);
		}
	}
	printf("\n");
}