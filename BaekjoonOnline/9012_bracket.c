#include <stdio.h>
#include <string.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	char arr[n][51];
	for(i = 0;i < n;i++){
		scanf("%s", &arr[i]);
		int cnt = 0, check = 1;
		if(strlen(arr[i]) % 2 != 0){
			check = 0;
			printf("NO\n");
		}
		else{
			for(j = 0;j < strlen(arr[i]);j++){
				if(arr[i][j] == '(') cnt++;
				else if(arr[i][j] == ')')	--cnt;
				if(cnt < 0){
					check = 0;
					printf("NO\n");
					break;
				}
			}
		if(cnt == 0)
			printf("YES\n");
		else if(check != 0)
			printf("NO\n");
		}
	}
}