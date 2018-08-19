#include <stdio.h>

int main(){
	int n, m, i, j, cnt = 0;
	scanf("%d %d", &n, &m);
	for(i = 1;i < n;i++){
		cnt++;
	}
	for(i = 1;i <= n;i++){
		for(j = 1;j < m;j++)
			cnt++;
	}
	printf("%d\n", cnt);
}