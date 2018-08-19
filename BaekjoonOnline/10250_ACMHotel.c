#include <stdio.h>

int main(){
	int T, H, W, N, i, j, k;
	scanf("%d", &T);
	for(i = 0 ; i < T; i++){
		scanf("%d %d %d", &H, &W, &N);
		int cnt = 0;
		for(j = 1 ; j <= W; j++){
			for(k = 1; k <= H;k++){
				cnt++;
				if(cnt == N)
						printf("%d%02d\n", k, j);
			}
		}
	}
}