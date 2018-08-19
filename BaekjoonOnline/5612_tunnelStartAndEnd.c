#include <stdio.h>

int main(){
	int n, m, i, x, y;
	scanf("%d %d", &n, &m);
	int arr[n+1], max;
	arr[0] = m, max = arr[0];
	for(i = 1;i <=n;i++){
		scanf("%d %d", &x, &y);
		m += (x - y);
		arr[i] = m;
		if(m < 0){
			printf("0\n");
			return 0;
		}
	}
	for(i = 1;i <= n;i++){
		if(max < arr[i])
			max = arr[i];
	}
	if(m >= 0)
		printf("%d\n", max);
}