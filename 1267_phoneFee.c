#include <stdio.h>
#include <math.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int input, Ysum = 0, Msum = 0;
	for(i = 0;i < n;i++){
		scanf("%d", &input);
		int young, min;
		if(input == 0)
			young = 0, min = 0;
		else{
			young = (input / 30 + 1) * 10;
			min = (input / 60 + 1) * 15;
		}
		Ysum +=young, Msum += min;
	}
	if(Ysum < Msum)
		printf("Y %d\n", Ysum);
	else if(Ysum > Msum)
		printf("M %d\n", Msum);
	else
		printf("Y M %d\n", Ysum);
}