#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	return strcmp((char*) a, (char*) b);
}
int main(){
	int t, n, i, j, check, k, l, isPos;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d", &n);
		char arr[n][20];
		for(j = 0;j <n;j++)
			scanf("%s", &arr[j]);
		qsort(arr, n, sizeof(char) * 20, compare);
		for(j = 0;j < n - 1;j++){
			check = 0, isPos = 1;
			for(k = 0;k < strlen(arr[j]);k++){
				if(arr[j][k] == arr[j+1][k]){
					check++;
				}
			}
			if(check == strlen(arr[j])){
				isPos = 0;
				printf("NO\n");
				break;
			}
		}
		if(isPos)
			printf("YES\n");
	}
}