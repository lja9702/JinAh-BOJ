#include <stdio.h>

int main(){
	int S = 0, T = 0;
	int min[4], man[4], i;
	for(i = 0;i<4;i++){
		scanf("%d", &min[i]);
		S += min[i];
	}
	for(i = 0;i<4;i++){
		scanf("%d", &man[i]);
		T += man[i];
	}
	if(S == T)
		printf("%d\n", S);
	else
		printf("%d\n", (S > T ? S : T));
}