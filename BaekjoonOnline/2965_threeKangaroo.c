#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int gap = (c - b > b - a ? c - b : b - a);
	printf("%d\n", gap - 1);
}