#include <stdio.h>

int main(){
	unsigned int S, i, cnt = 0;
	scanf("%u", &S);
	for(i = 1;i <= S;i++){
		S -= i;
		cnt++;
		if(S < i)
			break;
	}
	printf("%d\n", cnt);
}