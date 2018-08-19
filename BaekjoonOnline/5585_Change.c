#include <stdio.h>

int main(){
	int money, change, cnt = 0;
	scanf("%d", &money);
	change = 1000 - money;
	while(change != 0){
		if(change / 500 > 0){
			cnt += change/500;
			change -= change/500 * 500;
		}
		else if(change / 100 > 0){
			cnt += change/100;
			change -= change/100 * 100;
		}
		else if(change /50  > 0){
			cnt += change/50;
			change -= change/50 * 50;
		}
		else if(change / 10 > 0){
			cnt += change/10;
			change -= change/10 * 10;
		}
		else if(change / 5 > 0){
			cnt += change/5;
			change -= change/5 * 5;
		}
		else if(change / 1 > 0){
			cnt += change/1;
			change -= change/1 * 1;
		}
	}
	printf("%d\n", cnt);
}