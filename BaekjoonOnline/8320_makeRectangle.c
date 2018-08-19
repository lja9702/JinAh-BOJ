#include <stdio.h>

int main(){
	int N, i, j, cnt = 0;
	scanf("%d", &N);
	for(i = 1;i <= N;i++){
		for(j = i; i*j <= N;j++){
			cnt++;
		}
	}
	printf("%d", cnt);
}