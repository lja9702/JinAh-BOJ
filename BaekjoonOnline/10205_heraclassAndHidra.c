#include <stdio.h>
#include <string.h>
int main(){
	int k, i;
	scanf("%d", &k);
	for(i = 1;i <= k;i++){
		int j , h;
		char arr[101] = {0};
		scanf("%d %s", &h, &arr);
		for(j = 0;j < strlen(arr);j++){
			if(arr[j] == 'b')
				h--;
			else if(arr[j] == 'c')
				h++;
		}
		printf("Data Set %d:\n", i);
		printf("%d\n\n", h);
	}
}