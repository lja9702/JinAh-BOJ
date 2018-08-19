#include <cstdio>
#include <algorithm>
int arr[101][101] = {0};
int main(){
	int n, m, a, b, i, j, k;
	scanf("%d %d", &n, &m);
	for(i = 0;i < m;i++){
		scanf("%d %d", &a, &b);
		arr[a][b] = 1, arr[b][a] = 1;
	}
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(i != j && arr[i][j] == 0)	arr[i][j] = 1 << 29;
		}
	}
	for(k = 1;k <= n;k++){
		for(i = 1;i <= n;i++){
			for(j = 1;j <= n;j++)
				arr[i][j] = std::min(arr[i][j], arr[i][k] + arr[k][j]);
		}
	}
	int cnt[101] = {0}, res = 1 << 29;
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(i != j)	cnt[i] += arr[i][j];
		}
		res = std::min(res, cnt[i]);
	}
	for(i = 1;i <= n;i++){
		if(res == cnt[i]){
			printf("%d\n", i);
			return 0;
		}
	}
}