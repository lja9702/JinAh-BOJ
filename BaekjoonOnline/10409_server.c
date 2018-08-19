#include <stdio.h>

int main(){
	int n, t, i, num, sum = 0, cnt = 0;
	scanf("%d %d", &n, &t);
	for(i = 0;i < n;i++){
		scanf("%d", &num);
		sum += num;
		if(sum > t)
			break;
		cnt++;
	}
	printf("%d\n", cnt);
}