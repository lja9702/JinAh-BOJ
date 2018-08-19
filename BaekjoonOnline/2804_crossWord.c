#include <stdio.h>
#include <string.h>

int main(){
	int i, j, checkI = -1, checkJ = -1, cntA = 0, cntB = 0;
	char A[50], B[50], C[50][50];
	scanf("%s %s", &A, &B);
	for(j = 0;j < strlen(A);j++){
		for(i = 0;i < strlen(B);i++){
			if(B[i] == A[j])
				break;
		}
		if(B[i] == A[j]){
			checkJ = j;
			checkI = i;
			break;
		}
	}

	for(i = 0;i < strlen(B);i++){
		for(j = 0;j < strlen(A);j++){
			if(checkI == i){
				C[i][j] = A[cntA];
				cntA++;
				if(checkJ == j)
					cntB++;
			}
			else if(checkJ == j){
				C[i][j] = B[cntB];
				cntB++;
			}
			else
				C[i][j] = '.';
		}
	}

	for(i = 0;i < strlen(B);i++)
		printf("%s\n", C[i]);
}