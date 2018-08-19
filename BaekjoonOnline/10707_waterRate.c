#include <stdio.h>

int main(){
	int A, B, C, D, P, fareX, fareY;
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &P);
	fareX = P*A;
	if(P > C)
		fareY = B + (P-C)*D;
	else
		fareY = B;
	printf("%d\n", (fareX > fareY ? fareY : fareX));
}