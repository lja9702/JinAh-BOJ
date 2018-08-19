#include <stdio.h>

int main(){
	int chess[8][8] = {0, };
	char check[8][8];
	int i, j, cnt = 0;
	for(i = 0;i<8;i++){
		for(j = 0;j<8;j++){
			if((i%2 == 0 && j%2 == 0) || (i%2 == 1 && j%2 == 1))
				chess[i][j] = 1;
		}
	}

	for(i = 0;i<8;i++){
		for(j = 0;j<8;j++){
			scanf("%c", &check[i][j]);
			if(check[i][j] == 'F' && chess[i][j] == 1)
				cnt++;
		}
		getchar();
	}
	printf("%d", cnt);
}