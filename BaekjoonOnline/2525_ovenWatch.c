#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(b + c >= 60){
		a += (b + c) / 60;
		b = (b + c) % 60;
	}
	else
		b += c;
	if(a > 23)
		a -= 24;
	printf("%d %d\n", a, b);
}