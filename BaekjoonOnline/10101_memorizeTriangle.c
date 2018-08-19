#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a + b + c;
	if(a == 60 && b == 60 && c == 60)
		printf("Equilateral\n");
	else if(sum == 180 && (a == b || b == c || c == a))
		printf("Isosceles\n");
	else if(sum == 180 && a != b && b != c && c != a)
		printf("Scalene\n");
	else if(sum != 180)
		printf("Error\n");
}