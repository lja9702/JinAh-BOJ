#include <stdio.h>
#include <string.h>
int main(){
	while(1){
		int cnt = 0, i, alpha[26] = {0};
		char arr[251] = {0};
		gets(arr);
		if(strcmp(arr, "#") == 0)
			return 0;
		for(i = 0;i < strlen(arr);i++){
			if(arr[i] >= 'a' && arr[i] <= 'z')
				alpha[arr[i] - 'a']++;
			else if(arr[i] >= 'A' && arr[i] <= 'Z')
				alpha[arr[i] - 'A']++;
		}
		for(i = 0;i < 26;i++)
			if(alpha[i] != 0)
				cnt++;
		printf("%d\n", cnt);
	}
}