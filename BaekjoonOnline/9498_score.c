#include <stdio.h>

int main(){
	int score;
	scanf("%d", &score);
	int temp = score / 10;
	if(temp >= 9 && temp <= 100)
		printf("A\n");
	else if((temp == 8)
		printf("B\n");
	else if(temp == 7)
		printf("C\n");
	else if(temp == 6)
		printf("D\n");
	else
		printf("F\n");
	return 0;
}