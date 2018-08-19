#include <stdio.h>

int main(){
	int N, arr[5], i, cnt =0;
	scanf("%d", &N);
	for(i = 0;i<5;i++){
		scanf("%d", &arr[i]);
		if(arr[i] == N)
			cnt++;
	}
	printf("%d\n", cnt);
}