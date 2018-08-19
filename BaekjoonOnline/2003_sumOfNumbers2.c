#include <stdio.h>

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	int A[N], i, j, cnt = 0;
	for(i = 0;i<N;i++)
		scanf("%d", &A[i]);

	for(i = 0;i<N;i++){
		int sum = 0;
		for(j = i;j<N;j++){
			sum += A[j];
			if(sum == M)
				cnt++;
			if(sum > M)
				break;
		}
	}
	printf("%d\n", cnt);
}