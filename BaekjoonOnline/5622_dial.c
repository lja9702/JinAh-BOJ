#include <stdio.h>
#include <string.h>

int main(){
	int i, j, sum = 0;
	char arr[16] = {0};
	scanf("%s", &arr);
	for(i = 0;i < strlen(arr);i++){
		for(j = 2;j <= 9;j++){
			if(j <= 6){
				if((j - 2) * 3 <= arr[i] - 'A' && (j - 1) * 3 > arr[i] - 'A'){
					sum += j + 1;
					break;
				}
			}
			else{
				if(arr[i] >= 'P' && arr[i] <= 'S'){
					sum += 8;
					break;
				}
				else if(arr[i] >= 'T' && arr[i] <= 'V'){
					sum += 9;
					break;
				}
				else if(arr[i] >= 'W' && arr[i] <= 'Z'){
					sum += 10;
					break;
				}
			}
		}
	}
	printf("%d\n", sum);
}