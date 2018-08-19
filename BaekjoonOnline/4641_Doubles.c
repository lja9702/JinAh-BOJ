#include <stdio.h>

int main(){
	int arr[15] = {0}, input, i, j;
	while(1){
		int n = 0, cnt = 0;
		while(1){
			scanf("%d", &arr[n]);
			if(arr[n] == -1)	return 0;
			if(arr[n] == 0)	break;
			n++;
		}
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				if(arr[i] * 2 == arr[j])
					cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}