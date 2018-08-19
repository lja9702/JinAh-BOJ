#include <stdio.h>
#include <string.h>

int main(){
	while(1){
		int i, check = 0, alpha[26] = {0};
		char arr[201] = {0};
		gets(arr);
		if(strcmp(arr, "*") == 0)
			return 0;
		for(i = 0;i < strlen(arr);i++)
			alpha[arr[i] - 'a']++;
		for(i = 0;i < 26;i++){
			if(alpha[i] == 0){
				printf("N\n");
				check = 1;
				break;
			}
		}
		if(check == 0)
			printf("Y\n");
	}
}