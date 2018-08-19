#include <stdio.h>
#include <string.h>

int main(){
	char input[201] = {0};
	int i, j, num[9] = {-1, 1, 0, 0, 1, 1, 0, 0, 1}, cur = 0, check = 0;
	int fsm[9][4] = {{1, 7, 0, 0}, {2, 0, 0, 0}, {3, 0, 0, 0}, 
	{3, 4, 0, 0}, {5, 7, 0, 0}, {5, 6, 0, 0}, {3, 4, 0, 0}, 
	{8, 0, 0, 0}, {1, 7, 0, 0}};
	scanf("%s", &input);	
	for(i = 0;i < strlen(input);i++){
		check = 0;
		for(j = 0;fsm[cur][j] != 0 && j < 4;j++){
			if(input[i] - '0' == num[fsm[cur][j]]){
				cur = fsm[cur][j], check = 1;
				break;
			}
		}
		if(check == 0){
			printf("NOISE\n");
			return 0;
		}
	}
	if(cur != 4 && cur != 8 && cur != 5)	printf("NOISE\n");
	else	printf("SUBMARINE\n");
}