#include <stdio.h>
int inf[1001][1001] = {0};
int main(){
	int i, j, n, m, x, y, a, b, c, dijk[1001] = {0}, check[1001] = {0};
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++)
			inf[i][j] = -1;
	}
	for(i = 0;i < m;i++){
		scanf("%d %d %d", &a, &b, &c);
		if(inf[a][b] == -1)	inf[a][b] = c;
		else if(inf[a][b] > c)	inf[a][b] = c;
	}
	scanf("%d %d", &x, &y);
	for(i = 0;i <= n;i++)
		dijk[i] = 1 << 30;
	dijk[x] = 0, check[x] = 1;
	while(x != y){
		for(i = 1;i <= n;i++){
			if(inf[x][i] != -1 && dijk[i] > dijk[x] + inf[x][i])
				dijk[i] = dijk[x] + inf[x][i];
		}
		int min = 0;
		for(i = 1;i <= n;i++){
			if(dijk[min] > dijk[i] && check[i] == 0)
				min = i;
		}
		x = min, check[x] = 1;
	}
	printf("%d\n", dijk[y]);
}