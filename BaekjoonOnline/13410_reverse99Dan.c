#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n, k, arr[1001] = {0}, max = 0;
	scanf("%d %d", &n, &k);
	for(i = 1;i <= k;i++){
		int num = i * n, cnt = 0;
		char temp[21] = {0};
		while(num){
			temp[cnt++] = num % 10 + '0';
			num /= 10;
		}
		arr[i] = atoi(temp);
		if(max < arr[i])
			max = arr[i];
	}
	printf("%d\n", max);
}