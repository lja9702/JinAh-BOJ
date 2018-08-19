#include <stdio.h>
#include <string.h>
int main(){
	int n, i, j;
	char arr[101];
	scanf("%d", &n);
	getchar();
	for(i = 0;i < n;i++){
		int cnt = 0, alpha[26] = {0};
		gets(arr);
		for(j = 0;j < strlen(arr);j++){
			if(arr[j] >= 'A' && arr[j] <= 'Z')
				alpha[arr[j] - 'A']++;
			else if(arr[j] >= 'a' && arr[j] <= 'z')
				alpha[arr[j] - 'a']++;
		}
		for(j = 0;j < 26;j++){
			if(alpha[j] != 0)
				cnt++;
		}
		if(cnt == 26)
			printf("pangram\n");
		else{
			printf("missing ");
			for(j = 0;j < 26;j++){
				if(alpha[j] == 0)
					printf("%c", j + 'a');
			}
			printf("\n");
		}
	}
}