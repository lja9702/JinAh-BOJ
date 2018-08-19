#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	if(*(int*) a > *(int*) b)
		return 1;
	else if(*(int*) a < *(int*) b)
		return -1;
	else{
		int* a2 = (int*)a+1, *b2 = (int*)b+1;
		return (*a2 > *b2 ? 1 : (*a2 < *b2 ? -1 : 0));
	}
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	int room[n][2];
	for(i = 0;i < n;i++)
		scanf("%d %d", &room[i][1], &room[i][0]);
	qsort(room, n, sizeof(int) * 2, compare);
	int min = 0, cnt = 1;
	for(j = min + 1;j < n;j++){
		if(room[min][0] <= room[j][1])
			min = j, cnt++;
	}
	printf("%d\n", cnt);
}