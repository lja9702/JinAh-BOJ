#include <stdio.h>
#include <string.h>
int main(){
	while(1){
		int i, check = 0, vowel = 0, cnt = 0, Conson = 0;
		char arr[21];
		scanf("%s", &arr);
		if(strcmp(arr, "end") == 0)
			return 0;
		else{
			for(i = 0;i < strlen(arr);i++){
				if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
					check = 1;
					break;
				}
			}

			if(check == 1){
				for(i = 0;i < strlen(arr);i++){
					if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
						vowel++, Conson = 0;
					else
						Conson++, vowel = 0;
					if(vowel == 3 || Conson == 3){
						printf("<%s> is not acceptable.\n", arr);
						check = 0;
						break;
					}
					if(arr[i] == arr[i + 1] && (arr[i] != 'e' && arr[i] !='o')){
						printf("<%s> is not acceptable.\n", arr);
						check = 0;
						break;
					}
				}
				if(check == 1)
					printf("<%s> is acceptable.\n", arr);
			}
			else
				printf("<%s> is not acceptable.\n", arr);
		}	
	}
}