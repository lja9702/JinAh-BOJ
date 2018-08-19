#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int t, i;
	scanf("%d", &t);
	getchar();
	for(i = 1;i <= t;i++){
		int sum, sep, j = 0, calc[4] = {0}, minF, minI, maxF, maxI;
		char sex[5] = {0}, str[51] = {0}, *pch;
		pch = strtok(gets(str), " '\"\n");
		strcpy(sex, pch);
		pch = strtok(NULL, " '\"\n");
		while(pch != NULL){
			calc[j++] = atoi(pch);
			pch = strtok(NULL, " '\"\n");
		}
		sum = (calc[0] + calc[2]) * 12 + calc[1] + calc[3];
		if(strcmp(sex, "B") == 0)	sum += 5;
		else	sum -= 5;
		sep = sum / 2;
		minF = (sep - 4) / 12;
		maxF = (sep + 4) / 12;
		maxI = (sep + 4) % 12;
		if(sum % 2 == 0)
			minI = (sep - 4) % 12;
		else{
			minI = (sep - 4) % 12 + 1;
			if(minI == 12)	minI = 0, minF += 1;
		}
		printf("Case #%d: %d'%d\" to %d'%d\"\n", i, minF, minI, maxF, maxI);
	}
}