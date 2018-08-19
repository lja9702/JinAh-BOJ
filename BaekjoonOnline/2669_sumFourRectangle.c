#include <stdio.h>

int main(){
	int arr[101][101] = {0, }, i, j, k, cnt = 0;
	int startX, startY, finX, finY;
	for(i = 0;i < 4;i++){
		scanf("%d %d %d %d", &startX, &startY, &finX, &finY);
		for(j = startY;j<finY;j++){
			for(k = startX;k<finX;k++){
				arr[j][k]++;
			}
		}
	}
	for(i = 0;i<101;i++){
		for(j = 0;j<101;j++){
			if(arr[i][j] != 0)
				cnt++;
		}
	}
	printf("%d\n", cnt);
}