#include <stdio.h>

int main(){
	int t, n, k, i, j;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d %d", &n, &k);
		int candy[n], sum = 0;
		for(j = 0;j < n;j++){
			scanf("%d", &candy[j]);
			sum += (candy[j] / k);
		}
		printf("%d\n", sum);
	}	
}