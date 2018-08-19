#include <stdio.h>

int main(){
	int t, i, k, n, p, q;
	int arr[15][15] = {0};
	for(i = 1;i <= 14;i++)
		arr[0][i] = i;
	for(i = 1;i <= 14;i++)
		arr[i][1] = 1;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d %d", &k, &n);
		for(p = 1;p <= k;p++)
			for(q = 1;q <= n;q++)
				arr[p][q] = arr[p][q - 1] + arr[p - 1][q];
		printf("%d\n", arr[k][n]);
	}
}