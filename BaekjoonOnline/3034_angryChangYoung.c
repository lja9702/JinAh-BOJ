#include <stdio.h>
#include <math.h>
int main(){
	int N, W, H, i, j, num;
	scanf("%d %d %d", &N, &W, &H);
	for(i = 0;i < N;i++){
		scanf("%d", &num);
		if(num <= W || num <= H || num <= sqrt(W*W + H*H))
			printf("DA\n");
		else
			printf("NE\n");
	}
}