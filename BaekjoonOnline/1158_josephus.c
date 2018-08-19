#include <stdio.h>

int main(){
	int n, i, check = 0, cnt = 0, j, m;
	scanf("%d %d", &n, &m);
	int arr[n + 1];
	for(i = 1;i <= n;i++)
		arr[i] = 0;
	printf("<");
	while(cnt != n){
		for(i = 1;i <= n;i++){
			if(arr[i] == 0){
				check++;
				if(check == m){
					if(cnt == n - 1)
						printf("%d>\n", i);
					else
						printf("%d, ", i);
					arr[i] = 1;
					check = 0;
					cnt++;
				}
			}
		}
	}
}