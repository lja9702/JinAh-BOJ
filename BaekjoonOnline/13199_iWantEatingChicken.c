#include <stdio.h>

int main(){
	int t, p, m, f, c, i, j;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int du = 0, sang = 0, cou = 0;
		scanf("%d %d %d %d", &p, &m, &f, &c);
		cou = m / p * c;
		du = cou / f;
		while(cou >= f){
			sang += cou / f;
			cou = (cou / f * c) + (cou % f);
		}
		printf("%d\n", sang - du);
	}
}