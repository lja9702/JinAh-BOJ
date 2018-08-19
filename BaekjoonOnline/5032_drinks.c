#include <stdio.h>

int main(){
	int e, f, c, cnt = 0;
	scanf("%d %d %d", &e, &f, &c);
	int sum = e + f, temp, remain;
	while(sum >= c){
		temp = sum / c;
		remain = sum % c;
		sum = temp + remain;
		cnt += temp;
	}
	printf("%d\n", cnt);
}