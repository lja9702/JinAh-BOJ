#include <cstdio>

int main(){
	int i, j, k, a, b, c, n, flag = 0;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	for(i = 0;i <= n / a;i++){
		for(j = 0;j <= n / b;j++){
			for(k = 0;k <= n / c;k++){
				if(a * i + b * j + c * k == n){
					printf("1\n");
					return 0;
				}
			}
		}
	}
	printf("0\n");
}