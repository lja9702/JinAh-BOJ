#include <stdio.h>
#include <string.h>
int main(){
	int alpha[26], i;
	char arr[101];
	for(i = 0;i < 26;i++)
		alpha[i] = -1;
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr);i++){
		if(alpha[arr[i] - 'a'] == -1)
			alpha[arr[i] - 'a'] = i;
	}
	for(i = 0;i < 26;i++)
		printf("%d ", alpha[i]);
}