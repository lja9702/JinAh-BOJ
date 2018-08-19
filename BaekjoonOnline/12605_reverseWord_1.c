#include <stdio.h>
#include <string.h>
char arr[1000001] = {0}, res[1000001] = {0};
int main(){
	int i, j, n, k;
	scanf("%d", &n);
	getchar();
	for(i = 0;i < n;i++){
		int top = -1;
		memset(arr, 0, strlen(arr) * sizeof(char));
		gets(arr);
		printf("Case #%d: ", i + 1);
		for(j = strlen(arr) - 1;j >= 0;j--){
			if(arr[j] == ' '){
				for(k = top;k >= 0;k--)
					printf("%c", res[k]);
				printf(" ");
				top = -1;
			}
			else
				res[++top] = arr[j];
		}
		for(k = top;k >= 0;k--)
			printf("%c", res[k]);
			top = -1;
		printf("\n");
	}
}