#include <cstdio>
int main(){
	int n, p;
	while(true){
		scanf("%d", &n);
		if(!n)	return 0;
		int page[1001] = {0}, num = 0, ch = 1, x = n / 2, y = x + 1;
		while(x >= 1 && y <= n){
			page[x] = ch, page[x - 1] = ch, page[y] = ch, page[y + 1] = ch++;
			x -= 2, y += 2;
		}
		scanf("%d", &p);
		for(int i = 1;i <= n;i++){
			if(i != p && page[i] == page[p])
				printf("%d ", i);
		}
		printf("\n");
	}
}