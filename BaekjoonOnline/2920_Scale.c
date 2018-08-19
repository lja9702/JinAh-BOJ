#include <stdio.h>

int main(){
	int arr[9] = {0}, i, asc = 0, des = 0, check = 1;
	for(i = 1;i <= 8;i++)
		scanf("%d", &arr[i]);
	for(i = 1;i <=8;i++){
		if(arr[i] == i)	asc++;
		else if(arr[i] == 8 - i + 1)	des++;
		else{
			printf("mixed\n");
			check = 0;
			break;
		}		
	}
	if(check == 1){
		if(asc == 8 && des == 0)	printf("ascending\n");
		else if(des == 8 && asc == 0)	printf("descending\n");
		else	printf("mixed\n");
	}
}