#include <stdio.h>

int main(){
	int num, cnt = 0, i, j = 0;
	scanf("%d", &num);
	while(num >= 10){
		int res = 1, n = num;
		while(n != 0){
			res *= n % 10;
			n /= 10;
		}
		num = res;
		cnt++;
	}
	printf("%d\n", cnt);
}