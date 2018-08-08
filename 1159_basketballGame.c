#include <stdio.h>

int main(){
	int N, list[26] = {0, }, i, check = 0;
	char name[50];
	scanf("%d", &N);
	for(i = 0;i < N;i++){
		scanf("%s", &name);
		list[name[0] - 'a']++; 
	}
	for(i = 0;i < 26;i++){
		if(list[i]>=5)
			printf("%c", i + 'a');
		else
			check++;
	}
	if(check == 26)
		printf("PREDAJA\n");
}