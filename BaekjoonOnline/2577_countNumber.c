#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int A, B, C, num[10] = {0, }, i;
	scanf("%d %d %d", &A, &B, &C);
	char result[15];
	sprintf(result,"%ld",A*B*C);
	for(i = 0;i<strlen(result);i++)
		num[result[i]-'0']++;

	for(i = 0;i<10;i++)
		printf("%d\n", num[i]);
}