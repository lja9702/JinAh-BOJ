#include <stdio.h>

int main(){
	int n, grd, crdSum = 0, i;
	double average, score;
	char sub[101], crd[3];
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%s %d %s", &sub, &grd, &crd);
		crdSum += grd;
		if(crd[0] == 'A'){
			if(crd[1] == '+')				score += 4.3 * grd;
			else if(crd[1] == '0')		score += 4.0 * grd;
			else if(crd[1] == '-')		score += 3.7 * grd;
		}
		else if(crd[0] == 'B'){
			if(crd[1] == '+')				score += 3.3 * grd;
			else if(crd[1] == '0')		score += 3.0 * grd;
			else if(crd[1] == '-')		score += 2.7 * grd;
		}
		else if(crd[0] == 'C'){
			if(crd[1] == '+')				score += 2.3 * grd;
			else if(crd[1] == '0')		score += 2.0 * grd;
			else if(crd[1] == '-')		score += 1.7 * grd;
		}
		else if(crd[0] == 'D'){
			if(crd[1] == '+')				score += 1.3 * grd;
			else if(crd[1] == '0')		score += 1.0 * grd;
			else if(crd[1] == '-')		score += 0.7 * grd;
		}
		else
			score += 0;
	}
	average = (double)((int)(score / crdSum * 100 + 0.5)) / 100;
	printf("%.2lf\n", average);
}