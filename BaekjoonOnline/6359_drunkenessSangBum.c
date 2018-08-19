#include <stdio.h>

int main(){
	int T, n;
	int i, j, k, l;
	scanf("%d", &T);
	for(i = 0;i<T;i++){
		scanf("%d", &n);
		int prison[n+1], cnt = 0;
		for(j = 1;j<n+1;j++)
			prison[j] = 0;

		for(j = 2;j<n+1;j++){
			for(k = j;k < n+1; k += j){
				prison[k]++;
			}
		}
		for(j = 1;j<n+1;j++){
			if(prison[j] %2 == 0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
}