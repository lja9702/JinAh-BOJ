#include <stdio.h>
#include <string.h>
int main(){
	char arr[101];
	scanf("%s", &arr);
	int i, cnt = 0;
	for(i = 0;i < strlen(arr);i++){
		if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			cnt++;
	}
	printf("%d\n", cnt);
}