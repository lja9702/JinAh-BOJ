#include <stdio.h>

int main(){
	int i, j, n, k, s, y, stud[3][2] = {0}, room = 0;
	scanf("%d %d", &n, &k);
	for(i = 0;i < n;i++){
		scanf("%d %d", &s, &y);
		if(y == 1 || y == 2)
			stud[0][0]++; 
		else if(y == 3 || y == 4){
			if(s == 0)	stud[1][0]++;
			else	stud[1][1]++;
		}
		else if(y == 5 || y == 6){
			if(s == 0)	stud[2][0]++;
			else	stud[2][1]++;
		}
	}
	for(i = 0;i < 3;i++){
		for(j = 0;j < 2;j++){
			if(stud[i][j] % k)
				room += (stud[i][j] / k + 1);
			else
				room += (stud[i][j] / k);
		}
	}
	printf("%d\n", room);
}