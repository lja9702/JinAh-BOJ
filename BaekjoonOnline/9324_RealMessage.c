#include <stdio.h>
#include <string.h>

int main(){
	int N, i, j;
	scanf("%d", &N);
	for(i = 0;i < N;i++){
		char arr[1000001];
		int alpha[26] = {0, }, check = 1;
		scanf("%s", &arr);
		for(j = 0;j < strlen(arr);j++){
			alpha[arr[j] - 'A']++;
			if(alpha[arr[j] - 'A'] % 3 == 0){
				if(j == strlen(arr) - 1 || arr[j] != arr[j+1]){
					printf("FAKE\n");
					check = 0;
					break;
				}
				else
					j++;
			}
		}
		if(check == 1)
			printf("OK\n");
	}
}
