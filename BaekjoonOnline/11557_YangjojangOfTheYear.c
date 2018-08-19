#include <stdio.h>

int main(){
	int t, n, i, j;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d", &n);
		char name[n][21];
		int alcol[n];
		for(j = 0;j < n;j++)
			scanf("%s %d", &name[j], &alcol[j]);
		int max = 0;
		for(j = 1;j < n;j++){
			if(alcol[max] < alcol[j])
				max = j;
		}
		printf("%s\n", name[max]);
	}
}