#include <stdio.h>

int main(){
	int c, i, n, j;
	scanf("%d", &c);
	for(i = 0;i < c;i++){
		int cnt = 0;
		scanf("%d", &n);
		for(j = 1;j <= n;j++){
			if(n % j == 0)
				cnt++;
		}
		printf("%d %d\n", n, cnt);
	}
}