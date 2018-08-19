#include <stdio.h>

int main(){
	int i;
	for(i = 0;i < 3;i++){
		int h, m, s, start[3], finish[3];
		scanf("%d %d %d %d %d %d", &start[0], &start[1], &start[2], &finish[0], &finish[1], &finish[2]);
		if(start[2] > finish[2]){
			s = 60 + finish[2] - start[2];
			finish[1]--;
		}
		else
			s = finish[2] - start[2];
		if(start[1] > finish[1]){
			m = 60 + finish[1] - start[1];
			finish[0]--;
		}
		else
			m = finish[1] - start[1];
		h = finish[0] - start[0];
		printf("%d %d %d\n", h, m, s);
	}
}