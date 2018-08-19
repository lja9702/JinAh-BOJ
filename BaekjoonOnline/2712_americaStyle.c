#include <stdio.h>
#include <string.h>

int main(){
	int T, i;
	double num;
	char unit[10];
	scanf("%d", &T);
	for(i = 0 ; i < T; i++){
		scanf("%lf %s", &num, &unit);
		if(strcmp(unit, "kg") == 0){
			num *= 2.2046;
			strcpy(unit,"lb");
		}
		else if(strcmp(unit, "lb") == 0){
			num *= 0.4536;
			strcpy(unit,"kg");
		}
		else if(strcmp(unit, "l") == 0){
			num *= 0.2642;
			strcpy(unit,"g");
		}
		else if(strcmp(unit, "g") == 0){
			num *= 3.7854;
			strcpy(unit,"l");
		}
		printf("%.4lf %s\n", num, unit);
	}
}