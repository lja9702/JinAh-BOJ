#include <stdio.h>

int main(){
	int C, N, i, j;
	scanf("%d", &C);
	for(i = 0;i < C;i++){
		double sum = 0, average;
		int cnt = 0;
		scanf("%d", &N);
		double score[N];
		for(j = 0;j<N;j++){
			scanf("%lf", &score[j]);
			sum += score[j];
		}
		average = sum / N;

		for(j = 0;j<N;j++){
			if(score[j] > average)
				cnt++;
		}
		printf("%.3lf%%\n", (double)cnt/N*100);
	}
	return 0;
}