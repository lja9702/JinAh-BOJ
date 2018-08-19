#include <stdio.h>

int main(){
	int t, n, i, j;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int sum = 0, num;
		scanf("%d", &n);
		for(j = 0;j < n;j++){
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
}