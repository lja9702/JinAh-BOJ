#include <stdio.h>

int main(){
	int x, sum = 0, cnt = 0, up, down;
	scanf("%d", &x);
	while(sum < x)
		sum += ++cnt;
	if(cnt % 2 == 0)
		up = cnt, down = 1;
	else
		up = 1, down = cnt;

	while(sum != x){
		if(cnt % 2 == 0)
			up--, down++;
		else
			up++, down--;
		sum--;
	}
	printf("%d/%d\n", up, down);
}