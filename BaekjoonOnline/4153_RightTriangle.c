#include <stdio.h>

int main(){
	int num[3], max, i, j;
	while(1){
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		if(num[0] == 0 && num[1] == 0 && num[2] == 0)
			break;
		for(i = 0;i < 3;i++){
			for(j = 0;j < 2;j++){
				if(num[j+1] < num[j]){
					int temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;
				}
			}
		}
		if(num[2]*num[2] == num[1] * num[1] + num[0] * num[0])
			printf("right\n");
		else
			printf("wrong\n");
	}
}