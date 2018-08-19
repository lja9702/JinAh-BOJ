#include <cstdio>

int main(){
	int n, i, j, cntF = 0;
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		int temp = i;
		while(temp % 5 == 0){
			temp /= 5;
			cntF++;
		}
	}
	printf("%d\n", cntF);
}