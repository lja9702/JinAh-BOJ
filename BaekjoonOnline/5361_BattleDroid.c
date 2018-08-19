#include <stdio.h>

int main(){
	int t, a, b, c, d, e, i;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		double sum = 0;
		sum = a * 350.34 + b *230.90 + c * 190.55 + d * 125.30 + e * 180.90;
		printf("$%.2lf\n", sum + 0.00000001);
	}
}