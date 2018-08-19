#include <stdio.h>
#include <string.h>

int main(){
	int n, t, i, j, k;
	scanf("%d", &t);
	char arr[21];
	for(i = 0;i < t;i++){
		scanf("%d %s", &n, &arr);
		for(j = 0;j < strlen(arr);j++){
			for(k = 0;k < n;k++)
					printf("%c",arr[j]);
		}
		printf("\n");
	}
}