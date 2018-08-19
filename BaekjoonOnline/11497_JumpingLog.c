#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0));
}

int main(){
	int t, i, j, n;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d", &n);
		int lg[10001] = {0}, hig[10001] = {0};
		for(j = 0;j < n;j++)
			scanf("%d", &lg[j]);
		qsort(lg, n, sizeof(int), compare);
		int mid = n / 2, left = 0, right = n - 1;
		hig[mid] = lg[n - 1];
		if(n % 2 == 0){
			for(j = 0;j < n;j += 2)
				hig[left++] = lg[j];
			for(j = 1;j < n - 1;j += 2)
				hig[right--] = lg[j];
		}
		else{
			for(j = 1;j < n - 1;j += 2)
				hig[left++] = lg[j];
			for(j = 0;j < n;j += 2)
				hig[right--] = lg[j];
		}
		int max = 0, temp = hig[n - 1] - hig[0];
		if(temp < 0)	temp = (-temp);
		if(max < temp)	max = temp;
		
		for(j = 0;j < n - 1;j++){
			temp = hig[j + 1] - hig[j];
			if(temp < 0)	temp = (-temp);
			if(max < temp)	max = temp;
		}
		printf("%d\n", max);
	}
}