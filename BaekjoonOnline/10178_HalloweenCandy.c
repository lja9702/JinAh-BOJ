#include <stdio.h>

int main(){
	int n, i, cnt, per;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d %d", &cnt, &per);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", cnt / per, cnt % per);
	}
}