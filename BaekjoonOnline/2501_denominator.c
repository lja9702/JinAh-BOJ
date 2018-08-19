#include <stdio.h>

int main(){
	int i, n, k, cnt = 0;
	scanf("%d %d", &n, &k);
	for(i = 1;i <= n;i++){
		if(n % i == 0){
			cnt++;
			if(cnt == k){
				printf("%d\n", i);
				return 0;
			}
		}
	}
	printf("0\n");
}