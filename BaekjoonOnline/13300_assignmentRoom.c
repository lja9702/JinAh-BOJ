#include <stdio.h>

int main(){
	int i, j, n, k, s, y, stu[7][2] = {0}, room = 0;
	scanf("%d %d", &n, &k);
	for(i = 0;i < n;i++){
		scanf("%d %d", &s, &y);
		stu[y][s]++;
	}
	for(i = 1;i <= 6;i++){
		for(j = 0;j < 2;j++){
			if(stu[i][j] % k != 0)	room += (stu[i][j] / k + 1);
			else	room += (stu[i][j] / k);
		}
	}
	printf("%d\n", room);
}