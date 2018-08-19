#include <stdio.h>

int main(){
	int N, cnt = 0, i;
	scanf("%d", &N);
	for(i = 1;i<=N;i++){
		if(i<100)
			cnt++;
		else{
			int hundred = i/100, ten = (i%100)/10, one = i%10;
			if((hundred >= ten && ten >= one) || (hundred <= ten && ten <= one)){
				if(hundred - ten == ten - one)
					cnt++;
			}
		}
	}
	printf("%d\n", cnt);
}