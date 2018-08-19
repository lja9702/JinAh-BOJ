#include <stdio.h>

int main(){
	int T, i;
	scanf("%d", &T);
	for(i = 0;i<T;i++){
		int N, C, grade = 0, j;
		double G, GPA = 0;
		scanf("%d", &N);
		for(j = 0;j<N;j++){
			scanf("%d %lf", &C, &G);
			grade += C;
			GPA += C*G;
		}
		printf("%d %.1f\n", grade, GPA/grade);
	}
}