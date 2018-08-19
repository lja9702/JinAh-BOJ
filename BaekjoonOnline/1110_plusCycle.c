#include <stdio.h>

int main(){
	int num, cnt = 0;
	scanf("%d", &num);
	int temp = num;

	do{
		int ten, one, sum;
		ten = temp/10;
		one = temp%10;
		sum = ten + one;
		temp = one*10 + (sum%10);
		printf("%d\n", temp);
		cnt ++;
	}while(num != temp);
	printf("%d\n", cnt);
	return 0;
}