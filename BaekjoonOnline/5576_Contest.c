#include <stdio.h>

int main(){
	int W[10], K[10], i, j, max, Wscore = 0, Kscore = 0;
	for(i = 0;i<10;i++)
		scanf("%d", &W[i]);
	for(i = 0;i<10;i++)
		scanf("%d", &K[i]);
	for(i = 0;i < 10;i++){
		for(j = 0;j < 9;j++){
			if(W[j] > W[j+1]){
				int temp = W[j];
				W[j] = W[j+1];
				W[j+1] = temp;
			}
			if(K[j] > K[j+1]){
				int temp = K[j];
				K[j] = K[j+1];
				K[j+1] = temp;
			}			
		}
	}
	Wscore = W[9] + W[8] + W[7];
	Kscore = K[9] + K[8] + K[7];
	printf("%d %d", Wscore, Kscore);
}
