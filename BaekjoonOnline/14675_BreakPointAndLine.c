#include <stdio.h>

int ver[100001] = {0};
int main(){
	int n, q, t, k, i, j, a, b;
	scanf("%d", &n);
	for(i = 0;i < n - 1;i++){
		scanf("%d %d", &a, &b);
		ver[a]++, ver[b]++;
	}
	scanf("%d", &q);
	for(i = 0;i < q;i++){
		scanf("%d %d", &t, &k);
		if(t == 1){
			if(ver[k] == 1)	printf("no\n");
			else	printf("yes\n");
		}
		else
			printf("yes\n");
	}
}