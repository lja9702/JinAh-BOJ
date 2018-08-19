#include <stdio.h>
int main(){
	int i, j, m, d, temp = 0;
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char day[7][20] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
	scanf("%d %d", &d, &m);
	for(i = 1;i < m;i++){
		temp += month[i];
	}
	temp = (temp + d) % 7;
	printf("%s\n", day[temp]);
}