#include <stdio.h>

int main(){
	int N, i, j, sum = 0;
	scanf("%d", &N);
	int arr[N];
	for(i = 0;i<N;i++){
		scanf("%d", &arr[i]);
		if(i<N-1)
			arr[i] -= 1;
		sum += arr[i];
	}
	printf("%d\n", sum);
}