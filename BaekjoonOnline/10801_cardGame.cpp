#include <cstdio>

int main(){
	int arr[2][10] = {0}, win[2] = {0};
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 10;j++)
			scanf("%d", &arr[i][j]);
	}
	for(int i = 0;i < 10;i++){
		if(arr[0][i] > arr[1][i])	win[0]++;
		else if(arr[0][i] < arr[1][i])	win[1]++;
	}
	(win[0] > win[1] ? printf("A\n") : (win[0] < win[1] ? printf("B\n") : printf("D\n")));
}