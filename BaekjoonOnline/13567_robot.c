#include <stdio.h>
#include <string.h>

int main(){
	int d, m, n, i, x = 0, y = 0, check = 1, ch = 0;
	scanf("%d %d", &m, &n);
	for(i = 0;i < n;i++){
		char in[10] = {0};
		scanf("%s %d", &in, &d);
		if(strcmp("TURN", in) == 0){
			if(d == 0){
				check--;
				if(check < 0)	check = 3;
			}
			else if(d == 1){
				check++;
				if(check > 3)	check = 0;
			}
		}
		else if(strcmp("MOVE", in) == 0){
			if(check == 0)			y += d;
			else if(check == 1)	x += d;
			else if(check == 2)	y -= d;
			else if(check == 3)	x -= d;
		}
		if(x < 0 || y < 0 || x > m || y > m)
			ch = 1;
	}
	if(ch)	printf("-1\n");
	else 		printf("%d %d\n", x, y);
}