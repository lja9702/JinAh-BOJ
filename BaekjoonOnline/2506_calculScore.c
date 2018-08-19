#include <stdio.h>
int main(){
	int n, i, j, sum = 0, cnt = 0;
	scanf("%d", &n);
	int arr[n];
	for(i = 0;i < n;i++){
		scanf("%d", &arr[i]);
		if(arr[i] == 0)
			cnt = 0;
		else
			sum += (++cnt);
	}
	printf("%d\n", sum);
}