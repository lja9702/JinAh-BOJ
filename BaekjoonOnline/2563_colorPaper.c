#include <stdio.h>

int main(){
	int N, paper[100][100] = {0, }, i, j, k, cnt = 0;
	scanf("%d", &N);
	for(i = 0;i<N;i++){
		int x, y;
		scanf("%d %d", &x, &y);
		for(j = x; j < x+10 ; j++){
			for(k = y ; k < y+10; k++){
				paper[k][j] = 1;
			}
		}
	}
	for(i = 0;i<100;i++){
		for(j = 0;j<100;j++){
			if(paper[i][j] == 1)
				cnt++;
		}
	}
	printf("%d\n", cnt);
}