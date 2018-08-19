#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int tar[m], i, j, sum[n];
	for(i = 0;i < m;i++)	scanf("%d", &tar[i]);
	for(i = 0;i < n;i++)	sum[i] = 0;
	for(i = 0;i < m;i++){
		int arr[n];
		for(j = 0;j < n;j++){
			scanf("%d", &arr[j]);
			if(tar[i] == arr[j])
				sum[j]++;
			else
				sum[tar[i] - 1]++;
		}
	}
	for(i = 0;i < n;i++)
		printf("%d\n", sum[i]);
}