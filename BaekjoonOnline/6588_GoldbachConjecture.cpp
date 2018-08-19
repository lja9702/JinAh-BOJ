#include <cstdio>
#include <cstring>
#include <cmath>
bool num[1000001];
int main(){
	int i, j, n;
	memset(num, true, 1000001);
	//num[1] = false;
	for(int i = 2;i <= 1000000;i++){
		if(num[i]){
			for(j = i * 2;j <= 1000000;j += i)
				num[j] = false;
		}
	}
	while(true){
		scanf("%d", &n);
		if(!n)	return 0;
		for(i = 3;i <= n;i += 2){
			if(num[i] && num[n - i]){
				printf("%d = %d + %d\n", n, i, n - i);
				break;
			}
		}
	}
}