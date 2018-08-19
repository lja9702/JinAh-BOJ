#include <stdio.h>

int main(){
	int n, m;
	scanf ("%d %d", &n, &m);
	int a, b, list[n+1][n+1], check[n+1], i, j, cnt = 0;
	for(i = 1;i <= n;i++)
		check[i] = 0;
	for(i = 1;i <= n;i++){
		for(j = 1;j <=n;j++)
			list[i][j] = 0;
	}
	for(i = 0;i < m;i++){
		scanf("%d %d", &a, &b);
		list[a][b] = 1;
		list[b][a] = 1;
	}
	for(i = 2;i <=n;i++){
		if(list[1][i] == 1)
			check[i]++;
	}
	for(i = 2;i <= n;i++){
		if(check[i] > 0){
			for(j = 1;j <= n;j++){
				if(list[i][j] == 1){
					if(check[j] <= 0)
						check[j] = -1;
				}
			}
		}
	}
	for(i = 2;i <= n;i++){
		if(check[i] != 0)
			cnt++;
	}
	printf("%d\n", cnt);
}