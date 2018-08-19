#include <stdio.h>
#include <string.h>

int main(){
	int x, i, cnt = 0;
	char arr[8] = {0};
	scanf("%d", &x);
	for(i = 0; x > 0;i++){
		arr[i] = x % 2 + '0';
		x /= 2;
	}
	for(i = 0;i <strlen(arr);i++){
		if(arr[i] == '1')
			cnt++;
	}
	printf("%d\n", cnt);
}