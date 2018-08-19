#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char a[8], b[8];
	int i;
	char mina[8], minb[8], maxa[8], maxb[8];
	scanf("%s %s", &a, &b);
	for(i = 0;i < strlen(a);i++){
		if(a[i] == '5' || a[i] == '6'){
			mina[i] = '5';
			maxa[i] = '6';
		}
		else{
			mina[i] = a[i];
			maxa[i] = a[i];
		}
	}

	for(i = 0;i < strlen(b);i++){
		if(b[i] == '5' || b[i] == '6'){
			minb[i] = '5';
			maxb[i] = '6';
		}
		else{
			minb[i] = b[i];
			maxb[i] = b[i];
		}
	}
	printf("%d %d\n", atoi(mina)+atoi(minb), atoi(maxa) + atoi(maxb));
}