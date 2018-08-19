#include <stdio.h>
#include <string.h>
int main(){
	char A[101], B[101], C, result[10001];
	int i, j;
	scanf("%s %c %s", &A, &C, &B);
	int max = (strlen(A)>strlen(B) ? strlen(A) : strlen(B));
	if(C == '*'){
		int AzeroCnt = 0, BzeroCnt = 0;
		for(i = 0;i<strlen(A);i++){
			if(A[i] == '0')
				AzeroCnt++;
		}
		for(i = 0;i<strlen(B);i++){
			if(B[i] == '0')
				BzeroCnt++;
		}
		result[0] = '1';
		for(i = 1;i <= AzeroCnt+BzeroCnt;i++)
			result[i] = '0';
		printf("%s\n", result);
	}
	if(C == '+'){
		for(i = 0;i < max;i++)
			result[i] = '0';
		if(strlen(A) == strlen(B))
			result[0] = '2';
		else{
			result[max - strlen(A)] = '1';
			result[max - strlen(B)] = '1';
		}
		printf("%s\n", result);
	}
}