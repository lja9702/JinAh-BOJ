#include <stdio.h>
#include <string.h>

int main(){
	int i, j;
	while(1){
		int check = 1;
		char arr[100] = {0}, nemo[3][2] = {{'E', 'e'}, {'M', 'm'}, {'O', 'o'}};
		gets(arr);
		if(strcmp(arr, "EOI") == 0)
			return 0;
		for(i = 0;i < strlen(arr);i++){
			if(arr[i] == 'n' || arr[i] == 'N'){
				int cnt = 0;
				for(j = i + 1;j < i + 4;j++){
					if(arr[j] == nemo[j - i - 1][0] || arr[j] == nemo[j - i - 1][1]){
						cnt++;
					}
				}
				if(cnt == 3){
					printf("Found\n");
					check = 0;
					break;
				}
			}
		}
		if(check == 1)
			printf("Missing\n");
	}
}