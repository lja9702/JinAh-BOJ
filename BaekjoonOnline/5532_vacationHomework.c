#include <stdio.h>

int main(){
	int L, A, B, C, D, math, kor, max;
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
	math = B/D;
	kor = A/C;
	if(math * D < B)
		math++;
	if(kor * C < A)
		kor++;
	max = (math>kor ? math:kor);
	printf("%d", L-max);
}