#include <stdio.h>

int main(){
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c) != EOF){
		int max = (b - a > c - b ? b - a : c - b);
		printf("%d\n", max - 1);
	}
}