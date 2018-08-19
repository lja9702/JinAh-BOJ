#include <stdio.h>

int main(){
	int arr[4], i, j;
	for(i = 0;i<3;i++){
		int count0 = 0, count1 = 0;
		for(j = 0;j<4;j++){
			scanf("%d", &arr[i]);
			if(arr[i] == 0)
				count0++;
			else if(arr[i] == 1)
				count1++;
		}
		if(count0 == 1 && count1 == 3)
			printf("A\n");
		else if(count0 == 2 && count1 == 2)
			printf("B\n");
		else if(count0 == 3 && count1 == 1)
			printf("C\n");
		else if(count0 == 4 && count1 == 0)
			printf("D\n");
		else if(count0 == 0 && count1 == 4)
			printf("E\n");
	}
	return 0;
}