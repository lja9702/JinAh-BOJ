#include <stdio.h>
#include <string.h>

int main(){
	int t, i, j;
	scanf("%d", &t);
	char arr[81];
	for(i = 0;i < t;i++){
		scanf("%s", &arr);
		int cnt = 0, sum = 0;
		for(j = 0;j < strlen(arr);j++){
			if(arr[j] == 'O'){
				cnt++;
				sum += cnt;
			}
			else if(arr[j] == 'X')
				cnt = 0;
		}
		printf("%d\n", sum);
	}
}