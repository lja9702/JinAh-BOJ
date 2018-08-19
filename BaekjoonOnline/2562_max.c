#include <stdio.h>

int main(){
	int i, num, max = -1, idx;
	for(i = 1;i <= 9;i++){
		scanf("%d", &num);
		if(max < num)
			max = num, idx =i;
	}
	printf("%d\n%d\n", max, idx);
}