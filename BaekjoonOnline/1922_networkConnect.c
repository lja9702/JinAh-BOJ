#include <stdio.h>
int com[1001][1001] = {0};
int main(){
	int i, j, n, m, a, b, c, cur = 1, min, sum = 0;
	int check[1001] = {0}, dis[1001] = {0};
	scanf("%d %d", &n, &m);
	for(i = 2;i <= n;i++)
		dis[i] = 1 << 30;

	for(i = 0;i < m;i++){
		scanf("%d %d %d", &a, &b, &c);
		com[a][b] = c, com[b][a] = c;
	}
	check[cur] = 1;
	
	for(i = 1;i < n;i++){
		min = 1 << 30;
		for(j = 1;j <= n;j++){
			if(j == cur || check[j] == 1)		continue;
			if(com[cur][j] > 0 && com[cur][j] < dis[j])
				dis[j] = com[cur][j];
			if(min == 1 << 30)
				min = j;
			if(dis[j] < dis[min])
				min = j;
		}
		cur = min;
		check[cur] = 1, sum += dis[min];
	}
	printf("%d\n", sum);
}