#include <stdio.h>
#include <math.h>

int main(){
	int N, i, counter = 1, check = 0;
	scanf("%d", &N);
	for(i = 2; i <= sqrt(N);i++){
		if(N % i == 0){
			check = 1;
			break;
		}
	}
	if(check == 0)
		counter = N - 1;
	else{
		for(i = 2;i <= N-1; i++){
			counter += 1;
			if(N % i == 0){
				counter = N - N/counter;
				break;
			}
		}
	}
	printf("%d\n", counter);
}