#include <stdio.h>

int main(){
	int sum = 0, i, j, a, b, c, arr[101] = {0};
	scanf("%d %d %d", &a, &b, &c);
	for(i = 0;i < 3;i++){
		int s, e;
		scanf("%d %d", &s, &e);
		for(j = s + 1;j <= e;j++)
			arr[j]++;
	}
	for(i = 1;i <= 100;i++){
		if(arr[i] == 1)
			sum += a;
		else if(arr[i] == 2)
			sum += (b * 2);
		else if(arr[i] == 3)
			sum += (c * 3);
	}
	printf("%d\n", sum);
}