#include <stdio.h>

int main(){
	int e = 0, s = 0, m = 0, E, S, M, cnt = 0;
	scanf("%d %d %d", &E, &S, &M);
	while(1){
		e++, s++, m++;
		if(e > 15)	e = 1;
		if(s > 28)	s = 1;
		if(m > 19)	m = 1;
		cnt ++;
		if(E == e && S == s && M == m)
			break;
	}
	printf("%d\n", cnt);
}