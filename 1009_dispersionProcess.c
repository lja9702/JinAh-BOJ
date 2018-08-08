#include <stdio.h>

int main(){
	int T, i, j;
	scanf("%d", &T);
	int a, b;
	for(i = 0; i < T; i++){
		scanf("%d %d", &a, &b);
		int arr[5], temp = 1, tempB;
		for(j = 1 ; j <= 4; j++){
			temp *= a;
			arr[j] = temp % 10;
		}
		tempB = b%4;
		if(tempB == 0)
			printf("%d\n", arr[4]);
		else
			if(arr[tempB] == 0)
				printf("10\n");
			else
				printf("%d\n", arr[tempB]);
	}
	return 0;
}