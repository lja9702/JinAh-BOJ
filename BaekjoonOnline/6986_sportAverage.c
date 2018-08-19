#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return (*(double*) a > *(double*) b ? 1 : (*(double*) a < *(double*) b ? -1 : 0));
}
int main(){
	int n, k, i, j;
	scanf("%d %d", &n, &k);
	double score[n], sumCut = 0, sumCol = 0;
	for(i = 0;i < n;i++)
		scanf("%lf", &score[i]);
	qsort(score, n, sizeof(double), compare);
	for(i = k;i < n - k;i++)
		sumCut += score[i], sumCol += score[i];
	for(i = 0;i < k;i++)
		sumCol += score[k];
	for(i = n - k ;i < n;i++)
		sumCol += score[n - k - 1];
	printf("%.2lf\n%.2lf\n", sumCut / (n - 2 * k) + 0.00000001, sumCol / n + 0.00000001);
}