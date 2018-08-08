#include <stdio.h>
#include <string.h>
int main(){
	int n, i, j, k, cnt = 0;
	scanf("%d", &n);
	char arr[n][101];
	for(i = 0;i < n;i++){
		scanf("%s", &arr[i]);
		int check = 0;
		for(j = 0;j < strlen(arr[i]) - 1;j++){
			if(arr[i][j] != arr[i][j+1]){
				for(k = j + 1;k < strlen(arr[i]);k++){
					if(arr[i][j] == arr[i][k]){
						check = 1;
						break;
					}
				}
			}
			if(check == 1)
				break;
		}
		if(check == 0)
			cnt++;
	}
	printf("%d\n", cnt);
}