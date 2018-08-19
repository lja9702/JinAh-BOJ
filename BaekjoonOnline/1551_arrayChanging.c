#include <stdio.h>

int main(){
	int n, k, i, j, arr[20] = {0};
	char col;
	scanf("%d %d", &n, &k);
	scanf("%d", &arr[0]);
	for(i = 1;i < n;i++)
		scanf("%c %d", &col, &arr[i]);
	for(i = 0;i < k;i++){
		for(j = 0;j < n - i - 1;j++){
			arr[j] = arr[j + 1] - arr[j];
		}
	}
	for(i = 0;i < n - k - 1;i++)
		printf("%d,", arr[i]);
	printf("%d\n", arr[n - k - 1]);
}