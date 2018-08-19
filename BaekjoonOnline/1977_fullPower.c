#include <stdio.h>

int main(){
	int m, n, i, j;
	scanf("%d %d", &m, &n);
	int arr[100], cnt = 0, sum = 0;
	for(j = 1;;j++){
		if(j * j >= m && j * j <= n){
			sum += j * j;
			arr[cnt++] = j * j;
		}
		else if(j * j > n)
			break;
	}
	if(sum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, arr[0]);
}