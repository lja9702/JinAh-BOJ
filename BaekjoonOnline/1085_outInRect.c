#include <stdio.h>

int main(){
	int x, y, w, h, min, i;
	int arr[4];
	scanf("%d %d %d %d", &x, &y, &w, &h);
	arr[0] = y;	arr[1] = h-y;
	arr[2] = x; arr[3] = w-x;
	min = arr[0];
	for(i = 0;i<4;i++){
		if(min > arr[i])
			min = arr[i];
	}
	printf("%d", min);
}