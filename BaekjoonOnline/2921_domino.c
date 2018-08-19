#include <stdio.h>

int main(){
	int n, i, j, cnt = 0;
	scanf("%d", &n);
	for(i = 0;i <= n;i++){
		for(j = i;j <= n;j++){
			cnt += i + j;
		}
	}
	printf("%d\n", cnt);
}