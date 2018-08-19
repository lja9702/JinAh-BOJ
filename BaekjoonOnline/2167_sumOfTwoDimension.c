#include <stdio.h>

int main(){
	int N, M, K, i, j, x, y, a, b, c;
	scanf("%d %d", &N, &M);
	int arr[N][M];
	for(a = 0;a < N; a++){
		for(b = 0 ;b < M; b++){
			scanf("%d", &arr[a][b]);
		}
	}
	scanf("%d", &K);
	for(a = 0;a<K;a++){
		scanf("%d %d %d %d", &i, &j, &x, &y);
		int sum = 0;
		for(b = i-1;b<x;b++){
			for(c = j-1;c<y;c++){
				sum += arr[b][c];
			}
		}
		printf("%d\n", sum);
	}
}