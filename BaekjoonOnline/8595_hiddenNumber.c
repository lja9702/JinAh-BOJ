#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i, n, ten = 1, cnt = 0, num = 0, temp = 0;
	long long sum = 0;
	scanf("%d", &n);
	char arr[n + 1];
	scanf("%s", &arr);
	for(i = strlen(arr) - 1;i >= 0;i--){
		if(arr[i] >= '0' && arr[i] <= '9'){
			num = arr[i] - '0';
			temp += num * ten, ten *= 10;
			cnt++;
		}
		else if(cnt != 0){
			if(cnt <= 6)
				sum += temp;
			cnt = 0, temp = 0, ten = 1;
		}
	}
	if(cnt != 0)
		sum += temp;
	printf("%lld\n", sum);
}