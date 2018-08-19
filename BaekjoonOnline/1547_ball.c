#include <stdio.h>

int main(){
	int m, i, arr[4] = {0, 1, 0, 0}, x, y;
	scanf("%d", &m);
	for(i = 0;i < m;i++){
		scanf("%d %d", &x, &y);
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}
	for(i = 1;i < 4;i++){
		if(arr[i] == 1)
			printf("%d\n", i);
	}
}