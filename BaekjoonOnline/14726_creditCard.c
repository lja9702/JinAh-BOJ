#include <stdio.h>

int main(){
	long long t, i, j, n, a, b;
	scanf("%lld", &t);
	for(i = 0;i < t;i++){
		long long temp = 1, cnt = 0;
		scanf("%lld", &n);
		while(n != 0){
			b = n % 10;
			if(temp % 2 == 0){
				b *= 2;
				if(b >= 10)
					b = (b / 10) + (b % 10);
			}
			cnt += b;
			n /= 10;
			temp++;
		}
		if(cnt % 10 != 0)	printf("F\n");
		else	printf("T\n");
	}
}