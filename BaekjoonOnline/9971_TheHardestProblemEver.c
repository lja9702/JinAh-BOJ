#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char plain[26] = {0}, temp[101] = {0};
	for(i = 0;i < 5;i++)		plain[i] = 'V' + i;
	for(i = 5;i < 26;i++)	plain[i] = 'A' + i - 5;
	while(1){
		char input[101] = {0};
		gets(input);
		if(!strcmp(input, "START"))
			continue;
		else if(!strcmp(input, "ENDOFINPUT"))	return 0;
		else if(!strcmp(input, "END")){
			for(i = 0;i < strlen(temp);i++){
				if('A' <= temp[i] && temp[i] <= 'Z')
					printf("%c", plain[temp[i] - 'A']);
				else
					printf("%c", temp[i]);
			}
			printf("\n");
			temp[0] = '\0';
		}
		else
			strcpy(temp, input);
	}
}