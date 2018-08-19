#include <stdio.h>

int main(){
	long long in, cnt = 1;
	scanf("%lld", &in);
	while(in > 1){
		if(in % 2 == 0)
			in /= 2;
		else
			in = 3 * in + 1;
		cnt++;
	}
	printf("%d\n", cnt);
}