#include <stdio.h>

int main(){
	int T, i;
	scanf("%d", &T);
	for(i = 0;i<T;i++){
		int HP[3], MP[3], atk[3], def[3], power;
		scanf("%d %d %d %d %d %d %d %d", &HP[0], &MP[0], &atk[0], &def[0],
		 &HP[1], &MP[1], &atk[1], &def[1]);
		HP[2] = HP[0] + HP[1];
		MP[2] = MP[0] + MP[1];
		atk[2] = atk[0] + atk[1];
		def[2] = def[0] + def[1];
		if(HP[2] < 1)
			HP[2] = 1;
		if(MP[2] < 1)
			MP[2] = 1;
		if(atk[2] < 0)
			atk[2] = 0;
		power = 1*HP[2] + 5*MP[2] + 2*atk[2] + 2*def[2];
		printf("%d\n", power);
	}
}