#include <stdio.h>

int main(){
	int R;
	double taxi, ucl;
	scanf("%d", &R);
	taxi = R*R*3.14159265358979323846;
	ucl = R*R*2;
	printf("%.6f\n%.6f\n", taxi, ucl);
}