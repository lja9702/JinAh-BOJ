#include <stdio.h>

int main(){
	int arr[4][2], i, j, cnt[8] = {0, }, temp = 0, count = 0;
	for(i = 0;i < 4;i++){
		for(j = 0;j < 2;j++){
			scanf("%d", &arr[i][j]);
			if(j == 0){
				temp -= arr[i][j];
				cnt[count++] = temp;
			}
			if (j == 1){
				temp += arr[i][j];
				cnt[count++] = temp; 
			}
		}
	}
	int max = cnt[0];
	for(i = 1;i < 8;i++){
		if(max < cnt[i])
			max = cnt[i];
	}
	printf("%d\n", max);
}