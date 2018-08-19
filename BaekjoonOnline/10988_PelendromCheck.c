#include <stdio.h>
#include <string.h>
int main(){
	char arr[101] = {0};
	scanf("%s", &arr);
	int s = 0, e = strlen(arr) - 1, res = 1;
	while(s < e){
		if(arr[s] != arr[e]){
			res = 0;
			break;
		}
		s++, e--;
	}
	printf("%d\n", res);
}