#include <stdio.h>

int main(){
	int N, answer, yes = 0, no = 0, i;
	scanf("%d", &N);
	for(i = 0;i < N; i++){
		scanf("%d", &answer);
		if(answer == 1)
			yes++;
		else if(answer == 0)
			no++;
	}
	if(yes > no)
		printf("Junhee is cute!\n");
	else
		printf("Junhee is not cute!\n");
	return 0;
}