#include <stdio.h>

long long combination(int*, int*);

int main(){
	int testNum, N, M;
	int i;
	scanf("%d", &testNum);
	for(i = 0;i<testNum;i++){
		scanf("%d %d", &N, &M);
		long long result = combination(&M, &N);
		printf("%ld\n", result);
	}
	return 0;
}

long long combination(int (*m), int (*n)){
	int i, num;
	long long numer = 1, denom = 1;
	
	if((*m)-(*n)<(*n))
	   num = (*n);
	else
	   num = ((*m)-(*n));

	for(i = (*m);i > num;i--){
		numer *= i;
		
		if(numer % (i-num) == 0)
			numer /= (i-num);
		else
			denom *= (i-num);
	}
	return numer / denom;
}
