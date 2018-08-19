#include <stdio.h>
#include <string.h>

int main(){
	int i, a = 0, b = 0, res[3][2] = {0}, temp = 0, resA = 0, resB = 0;
	char arr[1000] = {0};
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr);i++){
		if(arr[i] == 'A')
			a++;
		else if(arr[i] == 'B')
			b++;
		if(a == 21 || b == 21){
			res[temp][0] = a, res[temp][1] = b;
			if(a == 21)	resA++;
			else if(b == 21)	resB++;
			a = 0, b = 0;
			temp++;
		}
	}
	for(i = 0;i < 3;i++){
		if(res[i][0] == 0 && res[i][1] == 0)
			continue;
		printf("%d-%d\n", res[i][0], res[i][1]);
	}
	if(resA > resB)	printf("A\n");
	else if(resA < resB)	printf("B\n");
}