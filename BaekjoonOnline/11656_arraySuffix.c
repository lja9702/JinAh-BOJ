#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char all[1000][1001] = {0};
int compare(const void* a, const void* b){
	return strcmp((char*) a, (char*) b);
}

int main(){
	int i, j;
	char arr[1001] = {0};
	scanf("%s", &arr);
	int len = strlen(arr);
	for(i = 0;i < len;i++){
		int cnt = 0;
		for(j = i;j < len;j++)
			all[i][cnt++] = arr[j];
	}
	qsort(all, len, sizeof(all[0]), compare);
	for(i = 0;i < len;i++)
		printf("%s\n", all[i]);
}