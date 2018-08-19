#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int binarySearch(char*, char listen[][20], int);

int compare(const void *a, const void *b){
	return strcmp((char*)a, (char*)b);
}

int main(){
	int N, M, i, j, min, cnt = 0;
	scanf("%d %d", &N, &M);
	min = (N > M ? M : N);
	char listen[N][20], see[20], result[min][20];
	for(i = 0;i<N;i++)
		scanf("%s", &listen[i]);
	qsort(listen, N, sizeof(listen[0]), compare);
	for(i = 0;i<M;i++){
		scanf("%s", &see);
		int tmp = binarySearch(see, listen, N);
		if(tmp){
			strcpy(result[cnt], see);
			cnt++;
		}
	}
	qsort(result, cnt, sizeof(result[0]), compare);

	printf("%d\n", cnt);
	for(i = 0;i<cnt;i++)
		printf("%s\n", result[i]);	
}

int binarySearch(char* see, char listen[][20], int N){
	int left = 0, right = N-1, middle;
	while(left <= right){
		middle = (left + right) / 2;
		if(strcmp(see, listen[middle]) > 0)
			left = middle + 1;
		else if(strcmp(see, listen[middle]) < 0)
			right = middle - 1;
		else
			return 1;
	}
	if(strcmp(see, listen[left]) == 0)
		return 1;
	else
		return 0;
}