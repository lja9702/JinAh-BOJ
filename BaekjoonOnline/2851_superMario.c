#include <stdio.h>

int main(){
	int i, num[10], sum = 0;
	for(i = 0;i<10;i++)
		scanf("%d", &num[i]);
	for(i = 0;i<10;i++){
		sum += num[i];
		if(sum == 100){
			printf("100\n");
			break;
		}
		else if(sum>100){
			if(sum-100 < 100-(sum-num[i])){
				printf("%d\n", sum);
				break;
			}
			else if(sum-100 > 100-(sum-num[i])){
				printf("%d\n", sum-num[i]);
				break;
			}
			else{
				printf("%d\n", sum);
				break;
			}
		}
	}
	if(sum < 100)
		printf("%d\n", sum);
}