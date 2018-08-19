#include <stdio.h>

int main(){
	int Md[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char day[7][10] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int x, y, i;
	int cnt=0;
	scanf("%d %d", &x, &y);
	for(i=1;i<x;i++){
		cnt += Md[i];
	}
	cnt += y;

	printf("%s", day[cnt%7]);
}