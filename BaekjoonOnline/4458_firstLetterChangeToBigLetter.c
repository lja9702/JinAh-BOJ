#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	getchar();
	for(i = 0;i < n;i++){
		char arr[31] = {0};
		gets(arr);
		if(arr[0] >= 'a' && arr[0] <= 'z'){
			char c = arr[0] - 'a' + 'A';
			arr[0] = c;
		}
		printf("%s\n", arr);
	}
}