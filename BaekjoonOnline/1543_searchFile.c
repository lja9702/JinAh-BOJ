#include <stdio.h>
#include <string.h>
int main(){
	int i, j, cnt = 0;
	char file[2501] = {0}, search[51] = {0};
	gets(file);
	gets(search);
	int lenF = strlen(file), lenS = strlen(search);
	for(i = 0;i < lenF - lenS + 1;i++){
		int eq = 0, idx = 0;
		for(j = i;j < i + lenS;j++){
			if(file[j] != search[idx++])	break;
			else	eq++;
		}
		if(eq == lenS)
			cnt++, i += lenS - 1;
	}
	printf("%d\n", cnt);
}