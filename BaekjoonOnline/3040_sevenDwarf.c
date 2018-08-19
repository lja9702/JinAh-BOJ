#include <stdio.h>

int main(){
	int i, j, sum = 0, dwarf[9] = {0};
	for(i = 0;i < 9;i++){
		scanf("%d", &dwarf[i]);
		sum += dwarf[i];
	}
	for(i = 0;i < 8;i++){
		for(j = i + 1;j < 9;j++){
			if(dwarf[i] + dwarf[j] == sum - 100){
				dwarf[i] = 0, dwarf[j] = 0;
				break;
			}
		}
	}
	for(i = 0;i < 9;i++){
		if(dwarf[i] != 0)
			printf("%d\n", dwarf[i]);
	}
}