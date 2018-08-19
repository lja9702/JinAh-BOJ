#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b){
	return (*(char*) a > *(char*) b ? -1 : (*(char*) a < *(char*) b ? 1 : 0));
}
int main(){
	int check = 0, sum = 0, i;
	char arr[100001] = {0};
	scanf("%s", &arr);
	qsort(arr, strlen(arr), sizeof(arr[0]), compare);
	for(i = 0;i <strlen(arr);i++){
		sum += arr[i] - '0';
		if(arr[i] == '0')
			check = 1;
	}
	if(check == 1 && sum % 3 == 0)
		printf("%s\n", arr);
	else
		printf("-1\n");
}