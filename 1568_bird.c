#include <stdio.h>

int main(){
	int n, cnt = 0, temp = 1;
	scanf("%d", &n);
	while(n != 0){
		n -= temp, temp++;
		if(n < 0)
			n += (temp - 1), temp = 1;
		else	cnt++;
	}
	printf("%d\n", cnt);
}