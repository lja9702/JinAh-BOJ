#include <stdio.h>

int main(){
	int j, r, i, n, medi[101] = {0}, sym, med;
	scanf("%d", &n);
	for(i = 0;i < 101;i++)
		medi[i] = -1;
	for(i = 0;i < n;i++){
		scanf("%d %d", &sym, &med);
		medi[sym] = med;
	}
	scanf("%d", &r);
	for(i = 0;i < r;i++){
		int temp, Li, check = 1;
		scanf("%d", &Li);
		int symp[Li];
		for(j = 0;j < Li;j++){
			scanf("%d", &temp);
			if(medi[temp] == -1)
				check = 0;
			else
				symp[j] = medi[temp];
		}
		if(!check)
			printf("YOU DIED\n");
		else{
			for(j = 0;j < Li;j++)
				printf("%d ", symp[j]);
			printf("\n");
		}
	}
}