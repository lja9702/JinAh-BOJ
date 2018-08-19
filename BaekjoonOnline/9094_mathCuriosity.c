#include <stdio.h>

int main(){
	int k, t, n, m, i, j;
	scanf("%d", &t);
	for(k = 0;k < t;k++){
		int cnt = 0;
		scanf("%d %d", &n, &m);
		for(i = 1;i < n;i++){
			for(j = i + 1;j < n;j++){
				if((i * i + j * j + m) % (i * j) == 0)
					cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}