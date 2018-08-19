#include <stdio.h>

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	if(x == 2 && y == 18)
		printf("Special\n");
	else if(x < 2 || (x <= 2 && y < 18))
		printf("Before\n");
	else
		printf("After\n");
}