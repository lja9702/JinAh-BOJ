#include <stdio.h>

int main(){
	int n, b, h, w, i, j;
	scanf("%d %d %d %d", &n, &b, &h, &w);
	int min = 0, cost, num, temp;
	for(i = 0;i < h;i++){
		scanf("%d", &cost);
		for(j = 0;j < w;j++){
			scanf("%d", &num);
			if(num >= n){
				temp = cost * n;
				if((temp <= b) && (min == 0 || min > temp))
					min = temp;
			}
		}
	}
	if(min != 0)
		printf("%d\n", min);
	else
		printf("stay home\n");
}