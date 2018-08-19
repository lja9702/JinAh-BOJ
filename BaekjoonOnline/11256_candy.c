#include <stdio.h>
#include <stdlib.h>

int arr[100000] = {0};

int compare(const void* a, const void* b){
	return *(int*) a > *(int*) b ? -1 : (*(int*) a < *(int*) b ? 1 : 0);
}
int main(){
	int t, j, n, i, p, a, b;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d %d", &j, &n);
		for(p = 0;p < n;p++){
			scanf("%d %d", &a, &b);
			arr[p] = a * b;
		}
		qsort(arr, n, sizeof(arr[0]), compare);
		for(p = 0;p < n;p++){
			if(j <= 0){
				printf("%d\n", p);
				break;
			}
			j -= arr[p];
		}
	}
}