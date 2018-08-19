#include <stdio.h>

int main(){
	int n, i, j, k, l;
	long long A[50][50] = {0}, B[50][50] = {0}, C[50][50] = {0}, sum = 0;
	int x1, y1, x2, y2, check = 1;
	scanf("%d", &n);
	scanf("%d %d", &x1, &y1);
	for(j = 0;j < x1;j++)
		for(k = 0;k < y1;k++)
			scanf("%lld", &A[j][k]);
	for(i = 1;i < n;i++){
		scanf("%d %d", &x2, &y2);
		if(y1 != x2)
			check = 0;
		for(j = 0;j < x2;j++)
			for(k = 0;k < y2;k++)
				scanf("%lld", &B[j][k]);

		for(j = 0;j < x1;j++){
			for(k = 0;k < y2;k++){
				C[j][k] = 0;
				for(l = 0;l < x2;l++)
					C[j][k] = C[j][k] + A[j][l]*B[l][k];
				C[j][k] %= 1000000007;
			}
		}

		for(j = 0;j < x1; j++)
			for(k = 0;k < y1;k++)
				A[j][k] = 0;

		y1 = y2;
		for(j = 0;j < x1;j++)
			for(k = 0;k < y1;k++)
				A[j][k] = C[j][k];
	}
	for(i = 0;i < x1;i++){
		for(j = 0;j < y1;j++){
			sum += C[i][j];
			sum %= 1000000007;
		}
	}
	if(n == 1){
		for(i = 0;i < x1;i++){
			for(j = 0;j < y1;j++){
				sum += A[i][j];
				sum %= 1000000007;
			}
		}
	}
	if(check == 1)
		printf("%lld\n", sum % 1000000007);
	else
		printf("-1\n");
}