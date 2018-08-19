#include <stdio.h>

int main(){
	int N, i, j, num, arr[10001] = {0, }, count = 0;
	scanf("%d", &N);
	for(i = 0;i < N;i++){
		scanf("%d", &num);
		arr[num]++;
	}
	for(i = 1;i <= 10000;i++){
		int cnt = 0;
		if(arr[i] != 0){
			while(cnt != arr[i]){
				printf("%d\n", i);
				count++;
				cnt++;
			}
		}
		if(count == N)
			break;
	}
}