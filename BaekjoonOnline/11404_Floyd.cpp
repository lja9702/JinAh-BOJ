#include <cstdio>
#include <algorithm>
long long arr[101][101] = {0}, c;
int main(){
	int n, m, i, j, k, a, b;
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(i == j)	arr[i][j] = 0;
			else 	arr[i][j] = 1 << 29;
		}
	}
	for(i = 1;i <= m;i++){
		scanf("%d %d %lld", &a, &b, &c);
		arr[a][b] = std::min(arr[a][b], c);
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