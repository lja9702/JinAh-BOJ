#include <stdio.h>
#include <string.h>
int main(){
	int arr[4] = {0, 1, 0, 0}, i;
	char seq[51] = {0};
	scanf("%s", &seq);
	for(i = 0;i < strlen(seq);i++){
		int temp;
		if(seq[i] == 'A'){
			temp = arr[1];
			arr[1] = arr[2];
			arr[2] = temp;
		}
		else if(seq[i] == 'B'){
			temp = arr[2];
			arr[2] = arr[3];
			arr[3] = temp;
		}
		else if(seq[i] == 'C'){
			temp = arr[1];
			arr[1] = arr[3];
			arr[3] = temp;
		}
	}
	for(i = 1;i < 4;i++)
		if(arr[i] == 1)
			printf("%d\n", i);
}