#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	double *i1 = (double*) a, *i2 = (double*) b;
	double *ef1 = (double*) a+1, *ef2 = (double*) b+1;
	double *c1 = (double*) a+2, *c2 = (double*) b+2;
	if(*ef1 > *ef2)	return -1;
	else if(*ef1 < *ef2)	return 1;
	else{
		if(*c1 > *c2)	return 1;
		else if(*c1 < *c2)	return -1;
		else{
			if(*i1 > *i2)	return 1;
			else if(*i1 < *i2)	return -1;
			else	return 0;
		}
	}
}

int main(){
	int n, k, h, i;
	double infor[1000][3] = {0};
	scanf("%d %d", &n, &k);
	for(i = 0;i < n;i++){
		scanf("%lf %lf %d", &infor[i][0], &infor[i][2], &h);
		infor[i][1] = h / infor[i][2];
	}
	qsort(infor, n, sizeof(infor[0]), compare);
	for(i = 0;i < k;i++)
		printf("%.0f\n", infor[i][0]);
}
