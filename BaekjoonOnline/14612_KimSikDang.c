#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	int *n1 = (int*) a, *t1 = (int*) a+1;
	int *n2 = (int*) b, *t2 = (int*) b+1;
	if(*t1 > *t2)	return 1;
	else if(*t1 < *t2)	return -1;
	else{
		if(*n1 > *n2)	return 1;
		else if(*n1 < *n2)	return -1;
		else	return 0;
	}
}
int main(){
	int n, k, i, j, num;
	scanf("%d %d", &n, &k);
	int arr[k][2], cnt = 0;
	char order[20] = {0};
	for(i = 0;i < n;i++){
		scanf("%s", &order);
		if(strcmp(order, "order") == 0){
			scanf("%d %d", &arr[cnt][0], &arr[cnt][1]);
			cnt++;
		}
		else if(strcmp(order, "sort") == 0)
			qsort(arr, cnt, sizeof(int) * 2, compare);
		else if(strcmp(order, "complete") == 0){
			int num, l;
			scanf("%d", &num);
			for(j = 0;j < cnt;j++){
				if(num == arr[j][0]){
					for(l = j ;l < cnt - 1;l++)
						arr[l][0] = arr[l + 1][0], arr[l][1] = arr[l + 1][1];
					cnt--;
					break;
				}
			}
		}
		if(cnt == 0)
			printf("sleep\n");
		else{
			for(j = 0;j < cnt;j++)
				printf("%d ", arr[j][0]);
			printf("\n");
		}
	}
}