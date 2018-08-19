#include <stdio.h>

int main(){
	int t, i, j, k;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d", &k);
		int passenger = 0, n = 0;
		for(j = 0;j < k;j++){
			n = (passenger + 0.5) * 2;
			passenger = n;
		}
		printf("%d\n", n);
	}
}