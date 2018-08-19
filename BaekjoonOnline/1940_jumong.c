#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[n], i, j, cnt = 0;
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for(i = 0;i < n - 1;i++){
		for(j = i + 1;j < n;j++){
			if(arr[i] + arr[j] == m)
				cnt++;
		}
	}
	printf("%d\n", cnt);
}