#include <stdio.h>

int main(){
	int n, i, j, cnt = 0;
	scanf("%d", &n);
	while(n >= 0 && n % 5 != 0)
		n -= 3, cnt++;
	if(n % 5 == 0){
		cnt += n / 5;
		printf("%d\n", cnt);
	}
	else
		printf("-1\n");
}