#include <stdio.h>
#include <string.h>
int main(){
	int t, i, j;
	char arr[51] = {0};
	scanf("%d", &t);
	for(i = 1;i<= t;i++){
		scanf("%s", &arr);
		printf("String #%d\n", i);
		for(j = 0;j < strlen(arr);j++)
			if(arr[j] == 'Z')
				printf("%c", 'A');
			else
				printf("%c", arr[j] + 1);
		printf("\n\n");
	}
}