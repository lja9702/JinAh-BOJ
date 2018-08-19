#include <stdio.h>
#include <string.h>
int main(){
	int i, j, t;
	scanf("%d", &t);
	for(j = 0;j < t;j++){
		int cntA = 0, cntB = 0;
		char arr[27] = {0}, a[27] = {0}, b[27] = {0};
		scanf("%s", &arr);
		for(i = 0;i < strlen(arr);i++){
			if(i % 2 != 0)	b[cntB++] = arr[i];
			else	a[cntA++] = arr[i];
		}
		if(strlen(arr) % 2 != 0){
			for(i = 0;i < strlen(arr);i++){
				if(i % 2 == 0)	b[cntB++] = arr[i];
				else	a[cntA++] = arr[i];
			}
		}
		printf("%s\n%s\n", a, b);
	}
}