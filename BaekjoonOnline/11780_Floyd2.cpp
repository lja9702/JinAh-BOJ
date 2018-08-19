#include <cstdio> 
#include <algorithm>
long long arr[101][101] = {0}, c, vis[101][101] = {0};
long long temp[101] = {0}, cnt = 0;
void dfs(int x, int y){
	if(vis[x][y] == x || vis[x][y] == y){
		temp[cnt++] = x;
		return ;
	}
	dfs(x, vis[x][y]);
	dfs(vis[x][y], y);
}
int main(){
	int n, m, i, j, k, a, b;
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(i == j){
				arr[i][j] = 0;
				vis[i][j] = i;
			}
			else 	arr[i][j] = 1 << 29;
		}
	}
	for(i = 1;i <= m;i++){
		scanf("%d %d %lld", &a, &b, &c);
		if(arr[a][b] > c) arr[a][b] = c, vis[a][b] = a;
	}

	for(k = 1;k <= n;k++){
		for(i = 1;i <= n;i++){
			for(j = 1;j <= n;j++){
				if(arr[i][j] > arr[i][k] + arr[k][j]){
					arr[i][j] = arr[i][k] + arr[k][j];
					vis[i][j] = k;
				}
			}
		}
	}
	
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			if(arr[i][j] != 1 << 29)	printf("%lld ", arr[i][j]);
			else	printf("0 ");
		}
		printf("\n");	
	}
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			cnt = 0;
			if(i == j){
				printf("0\n");
				continue;
			}
			dfs(i, j);
			printf("%lld ", cnt + 1);
			for(k = 0;k < cnt;k++)
				printf("%lld ", temp[k]);
			printf("%d\n", j);
		}
	}
}