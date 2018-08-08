#include <stdio.h>

int main(){
	int N, i, j;
	scanf("%d\n", &N);
	char arr[N][N];
	for(i = 0;i<N;i++){
		for(j = 0;j<N;j++){
			scanf("%c", &arr[i][j]);
		}
		getchar();
	}

	int rowSum = 0, colSum = 0;
	for(i = 0;i<N;i++){
		int rowcnt = 0, colcnt = 0;
		for(j = 0;j<N;j++){
			if(arr[i][j] == '.')
				rowcnt++;
			else if(arr[i][j] == 'X'){
				if(rowcnt >= 2)
					rowSum++;
				rowcnt = 0;
			}
			if(rowcnt >= 2 && j == N-1)
				rowSum++;
		}

		for(j = 0;j<N;j++){
			if(arr[j][i] == '.')
				colcnt++;
			else if(arr[j][i] == 'X'){
				if(colcnt >= 2)
					colSum++;
				colcnt = 0;
			}
			if(colcnt >= 2 && j == N-1)
				colSum++;
		}
	}
	printf("%d %d", rowSum, colSum);
}