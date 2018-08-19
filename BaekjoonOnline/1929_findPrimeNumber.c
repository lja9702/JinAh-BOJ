#include <stdio.h>
int arr[1000001] = {0};
int main(){
	int m, n, i, j;
	scanf("%d %d", &m, &n);
	arr[1] = 1;
	for(i = 2;i * i <= n;i++)
		for(j = i * 2;j <= n;j += i)
			arr[j] = 1;

	for(i = m;i <= n;i++){
		if(arr[i] == 0)
			printf("%d\n", i);
	}
}