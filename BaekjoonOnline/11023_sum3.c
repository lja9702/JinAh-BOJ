#include <stdio.h>

int main(){
	int sum = 0, a;
	while(scanf("%d", &a) != EOF){
		sum += a;
	}
	printf("%d\n", sum);
}