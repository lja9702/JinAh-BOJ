#include <stdio.h>

int main(){
	int arr[42] = {0}, in, i, cnt = 0;
	for(i = 0;i < 10;i++){
		scanf("%d", &in);
		arr[in % 42]++;
	}
	for(i = 0;i < 42;i++)
		if(arr[i] != 0)
			cnt++;
	printf("%d\n", cnt);
}