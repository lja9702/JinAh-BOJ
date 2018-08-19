#include <stdio.h>
#include <stdlib.h>
long long arr[100000][3] = {0};
int compare(const void* a, const void* b){
	long long *p1 = (long long*) a + 2, *p2 = (long long*) b + 2;
	return (*p1 > *p2 ? 1 : (*p1 < *p2 ? -1 : 0));
}

int main(){
	long long group[10001] = {0}, sum = 0;
	int v, e, i, j, root1, root2;
	scanf("%d %d", &v, &e);
	for(i = 0;i < e;i++)
		scanf("%lld %lld %lld", &arr[i][0], &arr[i][1], &arr[i][2]);
	for(i = 1;i <= v;i++)
		group[i] = i;
	qsort(arr, e, sizeof(arr[0]), compare);
	for(i = 0;i < e;i++){
		root1 = arr[i][0], root2 = arr[i][1];
		while(root1 != group[root1])
			root1 = group[root1];
		while(root2 != group[root2])
			root2 = group[root2];
		if(root1 == root2)	continue;
		sum += arr[i][2];
		group[root2] = group[root1];
	}
	printf("%lld\n", sum);
}