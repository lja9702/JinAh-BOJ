#include <cstdio>
#include <algorithm>
int arr[101][101] = {0}, check[101] = {0};
int main(){
	int n, m, i, j, k, a, b, cnt = 0;
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(i == j)	arr[i][j] = 0;
			else 	arr[i][j] = 1 << 29;
		}
	}
	for(i = 1;i <= m;i++){
		scanf("%d %d", &a, &b);
		arr[a][b] = 1, arr[b][a] = 1;
	}
	for(k = 1;k <= n;k++){
		for(i = 1;i <= n;i++){
			for(j = 1;j <= n;j++)
				arr[i][j] = std::min(arr[i][j], arr[i][k] + arr[k][j]);
		}
	}
	
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(arr[i][j] != 1 << 29)	printf("%lld ", arr[i][j]);
			else	printf("0 ");
		}
		printf("\n");	
	}
}