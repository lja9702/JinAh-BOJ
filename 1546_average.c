#include <stdio.h>

int main(){
	int N, i;
	double M, sum = 0;
	scanf("%d", &N);
	double score[N];
	
	scanf("%lf", &score[0]);
	M=score[0];
	
	for(i = 1;i<N;i++){
		scanf("%lf", &score[i]);
		if(score[i] > M)
			M = score[i];
	}

	for(i = 0;i<N;i++){
		score[i] = score[i] / M * 100;
		sum += score[i];
	}
	printf("%.2lf\n", sum / N);
	return 0;
}