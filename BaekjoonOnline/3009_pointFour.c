#include <stdio.h>

int main(){
	int p[3][2] = {0}, x, y, i;
	for(i = 0;i < 3;i++)
		scanf("%d %d", &p[i][0], &p[i][1]);
	if(p[0][0] == p[1][0])	x = p[2][0];
	else if(p[1][0] == p[2][0])	x = p[0][0];
	else if(p[2][0] == p[0][0])	x = p[1][0];
	if(p[0][1] == p[1][1])	y = p[2][1];
	else if(p[1][1] == p[2][1])	y = p[0][1];
	else if(p[2][1] == p[0][1])	y = p[1][1];
	printf("%d %d\n", x, y);
}