#include <stdio.h>

int main(){
	int i, j;
	int arr[300000] = {0, };
	for(i = 0;i < 300000;i++)
		arr[i] = 1;
	for(i = 2;i < 300000;i++){
		for(j = 2*i;j < 300000;j += i){
			arr[j] = 0;
		}
	}
	while(1){
		int n, cnt = 0;
		scanf("%d", &n);
		if(n == 0)	break;
		for(j = n+1;j<= 2*n;j++){
			if(arr[j] == 1)
				cnt++;
		} 
		printf("%d\n", cnt);
	}
}