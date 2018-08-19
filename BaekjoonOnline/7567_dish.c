#include <stdio.h>
#include <string.h>

int main(){
	char input[51];
	int i, result = 10;
	scanf("%s", &input);
	for(i = 1;i<strlen(input);i++){
		if(input[i-1] == input[i])
			result += 5;
		else
			result += 10;
	}
	printf("%d\n", result);
}