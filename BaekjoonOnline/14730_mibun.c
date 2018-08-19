#include <stdio.h>

int main(){
	int i, n, res = 0;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		int c, k;
		scanf("%d %d", &c, &k);
		res += (c * k);
	}
	printf("%d\n", res);
}