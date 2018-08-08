#include <stdio.h>
#include <math.h>

int main(){
	int dia, ver, hor;
	scanf("%d %d %d", &dia, &ver, &hor);
	double real = (double) dia / sqrt(ver * ver + hor * hor);
	int realVer = floor(real * ver), realHor = floor(real * hor);
	printf("%d %d\n", realVer, realHor);
}