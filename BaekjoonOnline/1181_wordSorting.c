#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	int lenA = strlen((char*)a), lenB = strlen((char*)b); 
	if(lenA > lenB)
		return 1;
	else if(lenA < lenB)
		return -1;
	else{
		return strcmp((char*) a, (char*) b);
	}
}
int main(){
	int n, i;
	scanf("%d", &n);
	char arr[n][51];
	for(i = 0;i < n;i++)
		scanf("%s", &arr[i]);
	qsort(arr, n, sizeof(arr[0]), compare);
	for(i = 0;i < n - 1;i++){
		if(strcmp(arr[i], arr[i+1]) != 0)
			printf("%s\n", arr[i]);
	}
	printf("%s\n", arr[n - 1]);
}