#include <stdio.h>

int arr[101][101] = {0};
int main(){
	int n, t, i, j, k, a, b;
	scanf("%d %d", &n, &t);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(i == j)	arr[i][j] = 0;
			else	arr[i][j] = 1 << 29;
		}
	}
	for(i = 0;i < t;i++){
		scanf("%d %d", &a, &b);
		arr[a][b] = 1, arr[b][a] = 1;
	}
	for(k = 1;k <= n;k++){
		for(i = 1;i <= n;i++){
			for(j = 1;j <= n;j++){
				if(arr[i][j] > arr[i][k] + arr[k][j])
					arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}
	int cnt = 0;
	for(i = 2;i <= n;i++){
		if(arr[1][i] != 1 << 29)	cnt++;
	}
	printf("%d\n", cnt);
}