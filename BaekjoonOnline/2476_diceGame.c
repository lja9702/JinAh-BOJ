#include <stdio.h>

int main(){
	int n, a, b, c, i, j;
	scanf("%d", &n);
	int arr[1000][7] = {0}, prise[n];
	for(i = 0;i < n;i++){
		scanf("%d %d %d", &a, &b, &c);
		arr[i][a]++, arr[i][b]++, arr[i][c]++;
		
		int max = 1, temp = 0;
		for(j = 1;j <= 6;j++){
			if(arr[i][j] == 1){
				temp++;
				if(max < j)	max = j;
			}
			else if(arr[i][j] == 3){
				prise[i] = 10000 + j * 1000;
				break;
			}
			else if(arr[i][j] == 2){
				prise[i] = 1000 + j * 100;
				break;
			}
		}
		if(temp == 3)
			prise[i] = max * 100;
	}
	int m = prise[0];
	for(i = 0;i < n;i++){
		if(m < prise[i])
			m = prise[i];
	}
	printf("%d\n", m);
}