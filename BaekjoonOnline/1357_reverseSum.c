#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char x[5], y[5], rvsX[5]={0}, rvsY[5]={0}, rvs[5]={0}, cnt = 0;
	scanf("%s %s", &x, &y);
	int i;
	for(i = 0;i < strlen(x);i++)
		rvsX[strlen(x) - i - 1] = x[i];

	for(i = 0;i < strlen(y);i++)
		rvsY[strlen(y) - i - 1] = y[i];

	int temp = atoi(rvsX) + atoi(rvsY);

	while(temp){
		rvs[cnt++] = temp%10 + '0';
		temp /= 10;
	}
	printf("%d\n", atoi(rvs));
}