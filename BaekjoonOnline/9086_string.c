#include <stdio.h>
#include <string.h>

int main(){
	int t, i;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		char arr[1001];
		scanf("%s", &arr);
		printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
	}
}
