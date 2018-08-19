#include <stdio.h>
#include <string.h>
int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		char arr[100] = {0};
		scanf("%s", &arr);
		if((arr[strlen(arr) - 1] - '0') % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
}