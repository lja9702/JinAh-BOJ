#include <stdio.h>
#include <string.h>

int main(){
	char input[101], alpha[26] = {0, };
	int i;
	scanf("%s", &input);
	for(i = 0;i<strlen(input);i++)
		alpha[input[i]%'a']++;
	

	for(i = 0;i<26;i++)
		printf("%d ", alpha[i]);
	printf("\n");
}