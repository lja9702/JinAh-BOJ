#include <stdio.h>
#include <string.h>
char a[1000001] = {0, }, rev[1000001] = {0, };
int main(){
	scanf("%s", &a);
	int i = strlen(a) - 1, temp = 0, cnt = 1, check = 0, num = 0;
	while(i >= 0){
		check++;
		temp += cnt * (a[i] - '0');
		if(check == 3){
			rev[num++] = temp + '0';
			temp = 0;
			check = 0;
			cnt = 1;
		}
		else
			cnt *= 2;
		i--;
	}
	rev[num] = temp + '0';
	int length = strlen(rev);
	for(i = length - 1; i >= 0;i--){
		if(i == length - 1 && rev[i] == '0')
			continue;
		printf("%c", rev[i]);
	}
}