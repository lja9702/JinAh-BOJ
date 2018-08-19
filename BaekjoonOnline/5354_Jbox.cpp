#include <cstdio>

int main(){
	int n, t, i, j;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		for(i = 1;i <= t;i++){
			if(i == 1 || i == t){
				for(j = 0;j < t;j++)	printf("#");
				printf("\n");
			}
			else{
				printf("#");
				for(j = 0;j < t - 2;j++)	printf("J");
				printf("#\n");
			}
		}
		printf("\n");
	}
}