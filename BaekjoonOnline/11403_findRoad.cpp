#include <cstdio>
#include <algorithm>
int arr[101][101] = {0};
int main(){
	int n,i, j, k, a, b;
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(arr[i][j] == 0)	arr[i][j] = 1 << 29;
		}
	}
	for(k = 1;k <= n;k++){
		for(i = 1;i <= n;i++){
			for(j = 1;j <= n;j++)
				arr[i][j] = std::min(arr[i][j], arr[i][k] + arr[k][j]);
		}
	}
	
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(arr[i][j] != 1 << 29)	printf("1 ");
			else	printf("0 ");
		}
		printf("\n");	
	}
}