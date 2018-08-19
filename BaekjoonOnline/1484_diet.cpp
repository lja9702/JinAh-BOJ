#include <cstdio>
#include <cmath>
int g, cnt[250000] = {0}, flag = 0;
int main(){
	scanf("%d", &g);
	for(int i = 1;i < sqrt(g);i++){
		if(g % i == 0){
			int a = i, b = g / i;
			if((a + b) % 2)	continue;
			cnt[(a + b) / 2]	 = 1, flag = 1;
		}
	}
	if(flag){
		for(int i = 1;i < 250000;i++){
			if(cnt[i])	printf("%d\n", i);
		}
	}
	else	printf("-1\n");
}