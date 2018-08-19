#include <stdio.h>

int main(){
	int N, K, i, j, cnt = 0;
	scanf("%d %d", &N, &K);
	int arr[N+1];
	for(i = 0;i<=N;i++)
		arr[i] = 1;
	for(i = 2;i<=N;i++){
		for(j = i;j <= N;j += i){
			if(arr[j] == 0)
				continue;
			arr[j] = 0;
			cnt++;
			if(cnt == K){
				printf("%d\n", j);
				break;
			}
		}
		if(cnt == K)
			break;
	}
}