#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return *(int*) a > *(int*) b ? 1 : ( *(int*) a < *(int*) b ? -1 : 0);
}
int main(){
	int i, j, n, win[10001] = {0}, lose[10001] = {0};
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d", &win[i]);
	}
	
	qsort(win, n, sizeof(win[0]), compare);

	int sum = 0, ch = 1;
	for(i = 0;i < n - 1;i++){
		sum += win[i];
		if(sum < ((i + 1) * (i) / 2)){
			ch = 0;
			break;
		}
	}
	sum += win[n - 1];
	if(ch == 1 && sum == (n * (n - 1) / 2))
		printf("1\n");
	else
		printf("-1\n");
}
