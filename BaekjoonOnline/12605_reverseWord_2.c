#include <stdio.h>
#include <string.h>

int main(){
	int i, j, n;
	scanf("%d", &n);
	getchar();
	for(i = 0;i < n;i++){
		int temp1 = 0, temp2 = 0;
		char arr[10000] = {0}, res[30][10000] = {0};
		gets(arr);
		for(j = 0;j < strlen(arr);j++){
			if(arr[j] == ' '){
				temp1++, temp2 = 0;
				continue;
			}
			res[temp1][temp2++] = arr[j];
		}
		printf("Case #%d: ", i + 1);
		for(j = temp1;j >= 0;j--){
			printf("%s ", res[j]);
		}
		printf("\n");
	}
}