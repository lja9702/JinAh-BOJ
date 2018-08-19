#include <stdio.h>
#include <string.h>
int main(){
	int i, cnt = 0;
	char arr[30001] = {0}, pass[30001] = {0};
	gets(arr);
	gets(pass);
	for(i = 0;i < strlen(arr);i++){
		if(cnt > strlen(pass) - 1)	cnt = 0;
		if(arr[i] == ' ')
			printf(" ");
		else{
			if(pass[cnt] < arr[i])
				printf("%c", 'a' + arr[i] - pass[cnt] - 1);
			else
				printf("%c", 'z' - (pass[cnt] - arr[i]));
		}
		cnt++;
	}
}