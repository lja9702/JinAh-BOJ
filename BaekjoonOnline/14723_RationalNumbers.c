#include <stdio.h>

int main(){
	int i = 1, n, a = 1, b = 0, temp = 1;
	scanf("%d", &n);
	while(1){
		if(i > n){
			i -= (temp - 1);
			break;
		}
		i += temp;
		temp++;
	}
	a = temp;
	while(i <= n){
		a--, b++;
		i++;
	}
	printf("%d %d\n", a, b);
}