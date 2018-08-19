#include <stdio.h>

int main(){
	int h, p;
	double res;
	while(scanf("%d %d", &h, &p) != EOF){
		printf("%.2f\n", (double) h / p);	
	}
}