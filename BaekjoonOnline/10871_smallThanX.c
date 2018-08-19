#include <stdio.h>

int main(){
	int X, N, i;
	scanf("%d %d", &N, &X);
	int arr[N];
	for(i = 0;i < N;i++){
		scanf("%d", &arr[i]);
	}

	for(i = 0;i < N;i++){
		if(arr[i] < X)
			printf("%d ", arr[i]);
	}
}