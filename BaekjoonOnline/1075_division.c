#include <stdio.h>

int main(){
	long long N, F;
	scanf("%lld %lld", &N, &F);
	int other = (N/100)*100, i;
	for(i = 0;i<100;i++){
		if((other+i) % F == 0){
			N = other + i;
			printf("%02d\n", N%100);
			break;
		}
	}
}