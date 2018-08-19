#include <stdio.h>
#include <string.h>

int main(){
	char arr[10];
	int check = 0, i, num[10] = {0, };
	
	scanf("%s", &arr);
	for(i = 0;i<strlen(arr);i++){
		if(arr[i] == '6' || arr[i] == '9')
			check++;
		else
			num[arr[i]-'0']++;
	}
	if(check %2 != 0)
		check += 1;

	int sum = num[0];
	for(i = 0 ;i<10;i++){
		if(sum < num[i])
			sum = num[i];
		if(sum < check/2)
			sum = check/2;
	}
	printf("%d\n",sum);
}