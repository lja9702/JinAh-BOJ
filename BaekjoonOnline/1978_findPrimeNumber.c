#include <stdio.h>

int main(){
	int N, i, j, cnt = 0;
	scanf("%d", &N);
	int num[N];
	for(i = 0;i < N;i++){
		scanf("%d", &num[i]);
		if(num[i] == 2){
				cnt++;	continue;
		}
		for(j = 2;j < num[i]; j++){
			if(num[i] % j == 0)
				break;
			if(num[i] - 1 == j)
				cnt++;
		}
	}
	printf("%d\n", cnt);
}