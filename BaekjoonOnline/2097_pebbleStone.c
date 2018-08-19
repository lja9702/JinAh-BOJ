#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	if(n <= 4)
		printf("4\n");
	else{
		int num, res = 2;
		for(i = 2;;i++){
			for(j = i;j <= i + 1;j++){
				num = i * j, res += 2;
				if(i * j >= n){
					printf("%d\n", res);
					return 0;
				}
			}
		}
	}
}