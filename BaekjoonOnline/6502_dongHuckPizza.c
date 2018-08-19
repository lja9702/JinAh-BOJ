#include <stdio.h>
int main(){
	int i = 0;
	while(++i){
		double r, w, l;
		scanf("%lf", &r);
		if(r == 0)
			return 0;
		scanf("%lf %lf", &w, &l);
		double diagon = w * w + l * l;
		if(diagon > (4 * r *r))
			printf("Pizza %d does not fit on the table.\n", i);
		else
			printf("Pizza %d fits on the table.\n", i);
	}
}