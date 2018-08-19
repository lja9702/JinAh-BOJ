#include <stdio.h>

int main(){
	int t, v, e, i;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d %d", &v, &e);
		printf("%d\n", 2 + e - v);
	}
}