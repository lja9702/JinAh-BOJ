#include <stdio.h>

int main(){
	int input, n, i, cnt = 0;
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		scanf("%d", &input);
		if(input != i)
			cnt++;
	}
	printf("%d\n", cnt);
}