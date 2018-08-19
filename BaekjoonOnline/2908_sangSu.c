#include <stdio.h>

int main(){
	char a[4] = {0}, b[4] = {0};
	scanf("%s %s", &a, &b);
	int chanA = (a[0] - '0') + (a[1] - '0') * 10 + (a[2] - '0') * 100;
	int chanB = (b[0] - '0') + (b[1] - '0') * 10 + (b[2] - '0') * 100;
	if(chanA < chanB)	printf("%d\n", chanB);
	else printf("%d\n", chanA);
}