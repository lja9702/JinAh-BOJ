#include <stdio.h>

int main(){
	int i, num, min = -1, sum = 0;
	for(i = 0;i < 7;i++){
		scanf("%d", &num);
		if(num % 2){
			sum += num;
			if(min == -1)
				min = num;
			else if(min > num)
				min = num;
		}
	}
	if(min == -1)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);
}