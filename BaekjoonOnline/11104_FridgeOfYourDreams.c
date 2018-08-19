#include <stdio.h>
#include <string.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		long long cnt = 1, sum = 0;
		char arr[25] = {0};
		scanf("%s", &arr);
		for(j = strlen(arr) - 1;j >= 0;j--)
			sum += cnt * (arr[j] - '0'), cnt *= 2;
		printf("%lld\n", sum);
	}
}