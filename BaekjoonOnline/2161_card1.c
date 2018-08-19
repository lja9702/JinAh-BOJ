#include <stdio.h>

int main(){
	int n, i, check = 1, cnt = 0, j;
	scanf("%d", &n);
	int arr[n + 1];
	for(i = 1;i <= n;i++)
		arr[i] = 0;

	while(cnt != n){
		for(i = 1;i <= n;i++){
			if(arr[i] == 0){
				check++;
				if(check == 2){
					printf("%d ", i);
					arr[i] = 1;
					check = 0;
					cnt++;
				}
			}
		}
	}
}