#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int score[n][3], i, j;
	for(i = 0;i < n;i++)
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);

	for(i = 0; i < n;i++){
		int check1 = 0, check2 = 0, check3 = 0;
		for(j = i + 1; j < n;j++){
			if(score[i][0] == score[j][0]){
				score[j][0] = 0;
				check1 = 1;
			}
			if(score[i][1] == score[j][1]){
				score[j][1] = 0;
				check2 = 1;
			}
			if(score[i][2] == score[j][2]){
				score[j][2] = 0;
				check3 = 1;
			}
		}
		if(check1 == 1)	score[i][0] = 0;
		if(check2 == 1)	score[i][1] = 0;
		if(check3 == 1)	score[i][2] = 0; 
	}
	for(i = 0;i < n;i++){
		int sum = 0;
		for(j = 0;j < 3;j++)
			sum += score[i][j];
		printf("%d\n", sum);
	}
}