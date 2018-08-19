#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	int arr[n];
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for(i = 1;i < n;i++){
		int de = 0;
		for(j = 1;j <= arr[i];j++){
			if(arr[0] % j == 0 && arr[i] % j == 0)
				de = j;
		}
		printf("%d/%d\n", arr[0] / de, arr[i] / de);
	}
}