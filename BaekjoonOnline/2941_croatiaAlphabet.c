#include <stdio.h>
#include <string.h>
int main(){
	int i, cnt = 0;
	char arr[101] = {0};
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr);i++){
		if(arr[i] == 'c' && (arr[i + 1] == '=' || arr[i + 1] == '-'))
			cnt++, i++;
		else if(arr[i] == 's' && arr[i + 1] == '=')
			cnt++, i++;
		else if(arr[i] == 'z' && arr[i + 1] == '=')
			cnt++, i++;
		else if(arr[i] == 'd'){
			if(arr[i + 1] == 'z' && arr[i + 2] == '=')
				cnt++, i += 2;
			else if(arr[i + 1] == '-')
				cnt++, i++;
			else
				cnt++;
		}
		else if((arr[i] == 'l' || arr[i] == 'n') && arr[i + 1] == 'j')
			cnt++, i++;
		else	cnt++;
	}
	printf("%d\n", cnt);
}