#include <stdio.h>

int main(){
	int n, m, k, i, j, l;
	scanf("%d %d", &n, &m);
	int A[n][m];
	for(i = 0;i < n;i++)
		for(j = 0;j < m;j++)
			scanf("%d", &A[i][j]);
	scanf("%d %d", &m, &k);
	int B[m][k], C[n][k];
	for(i = 0;i < m;i++)
		for(j = 0;j < k;j++)
			scanf("%d", &B[i][j]);
	for(i = 0;i < n;i++){
		for(j = 0;j < k;j++){
			C[i][j] = 0;
			for(l = 0;l < m;l++){
				C[i][j] += (A[i][l] * B[l][j]);
			}
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
}