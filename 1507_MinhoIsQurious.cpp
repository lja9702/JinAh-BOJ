#include <cstdio>
int n, floyd[21][21] = {0}, check[21][21] = {0};
int main(){
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d", &floyd[i][j]);
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			int flag = 1;
			for(int k = 1;k <= n;k++){
				if(i != k && j != k && floyd[i][j] == floyd[i][k] + floyd[k][j]){
					check[i][j] = 0, check[i][k] = 1 , check[k][j] = 1;
					flag = 0;
					printf("%d %d %d\n", i, j, k);
				}
			}
			if(flag)	check[i][j] = 1;
		}
	}
	int cnt = 0, sum = 0;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			printf("%d ", check[i][j]);
			if(i < j && check[i][j]){
				sum += floyd[i][j], cnt++;
			}
		}
		printf("\n");
	}
	if(!cnt)	printf("-1\n");
	else	printf("%d\n", sum);
}