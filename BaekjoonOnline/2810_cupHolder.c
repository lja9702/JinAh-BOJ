#include <stdio.h>
#include <string.h>

int main(){
	int n, i, cnt = 0, result = 0, check = 0, cntS = 0;
	char arr[50] = {0}, res[100] = {0};
	scanf("%d", &n);
	scanf("%s", &arr);
	res[cnt++] = '*';
	for(i = 0;i < n;i++){
		if(arr[i] == 'S'){
			res[cnt++] = 'S';
			res[cnt++] = '*';
		}
		else if(arr[i] == 'L'){
			res[cnt++] = 'L';
			check++;
			if(check == 2){
				res[cnt++] = '*';
				check = 0;
			}
		}
	}
	for(i = 0;i < strlen(res);i++){
		if(res[i] == 'S')
			cntS++;
		else if(res[i] == '*')
			result++;
	}
	if(cntS == n)
		printf("%d\n", cntS);
	else
		printf("%d\n", result);
}