#include <stdio.h>

int main(){
	int x, y, n, i;
	scanf("%d %d", &x, &y);
	double seven = (double) x / y * 1000;
	scanf("%d", &n);
	double other[n][3];
	for(i = 0;i<n;i++){
		scanf("%lf %lf", &other[i][0], &other[i][1]);
		other[i][2] = other[i][0] / other[i][1] * 1000;
	}
	double min = other[0][2];
	for(i = 0;i<n;i++){
		if(other[i][2] < min)
			min = other[i][2];
	}
	if(min < seven)
		printf("%0.2lf\n", min);
	else
		printf("%0.2lf\n", seven);
}