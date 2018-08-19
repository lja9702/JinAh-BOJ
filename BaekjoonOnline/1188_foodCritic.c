#include <stdio.h>

int main(){
	int i, j, n, m;
	scanf("%d %d", &n, &m);
	int max = (m > n) ? m : n;
	while(1){
		if(max % m == 0 && max % n == 0)
			break;
		max++;
	}
	int cnt = 0, check = 0;
	for(i = 1;i <= n;i++){
		for(j = 1;j <= max / n ;j++){
			check++;
			if((check == max / m)){
				if(j != max / n)
					cnt++;
				check = 0;
			}
		}
	}
	printf("%d\n", cnt);
}