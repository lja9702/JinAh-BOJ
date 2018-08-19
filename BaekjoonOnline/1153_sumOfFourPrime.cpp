#include <cstdio>
#include <cstring>
#include <cmath>
bool num[1000001], odd = false;
int main(){
	int i, j, n, temp = 4;
	memset(num, true, 1000001);
	num[1] = false;
	for(int i = 2;i <= 1000000;i++){
		if(num[i]){
			for(j = i * 2;j <= 1000000;j += i)
				num[j] = false;
		}
	}
	scanf("%d", &n);
	if(n < 8){
		printf("-1\n");
		return 0;
	}
	if(n % 2)	odd = true, n -= 5;
	else	n -= 4;
	for(i = 2;i <= n;i++){
		if(num[i] && num[n  - i]){
			if(odd)	printf("2 3 %d %d\n", i, n - i);
			else	printf("2 2 %d %d\n", i, n - i);
			return 0;
		}
	}
}