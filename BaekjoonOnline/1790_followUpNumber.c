#include <stdio.h>

int main(){
	int N, k, check = 10, i;
	long long cnt = 0;
	scanf("%d %d", &N, &k);

	for(i = 1;i <= N;i++){
		if(i < 10)	cnt += 1;
		else if(i < 100)	cnt += 2;
		else if(i < 1000)	cnt += 3;
		else if(i < 10000)	cnt += 4;
		else if(i < 100000)	cnt += 5;
		else if(i < 1000000)	cnt += 6;
		else if(i < 10000000)	cnt += 7;
		else if(i < 100000000)	cnt += 8;
		else if(i < 1000000000)	cnt += 9;

		if(cnt >= k){
			if(i < 100){
				if(cnt == k)
					printf("%d\n", i % check);
				else
					printf("%d\n", i / check);
				break;
			}
			if(cnt == k)
				printf("%d\n", i % check);
			else{
				while((--cnt) != k)
					check *= 10;
				printf("%d\n", (i / check) % 10);
			}
			break;
		}
	}
	if(cnt < k)
		printf("-1\n");
}
