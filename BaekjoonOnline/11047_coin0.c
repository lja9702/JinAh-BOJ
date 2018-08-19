#include <stdio.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int coin[n], i, j, cnt = 0;
	for(i = 0;i < n;i++){
		scanf("%d", &coin[i]);
	}
	while(k != 0){
		for(i = 0;i < n;i++){
			if(coin[i] > k)
				break;
		}
		k -= coin[i - 1], cnt++;
	}
	printf("%d\n", cnt);
}