#include <stdio.h>
#include <string.h>
int main(){
	int j;
	char alpha[101];
	gets(alpha);

	for(j = 0;j<strlen(alpha);j++){
		printf("%c", alpha[j]);
		if((j+1)%10 == 0)
			printf("\n");
	}
	return 0;
}