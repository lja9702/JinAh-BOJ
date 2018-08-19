#include <cstdio>
#include <cstring>
#include <algorithm>
bool prime[10001];
int main(){
	int m, n, sum = 0, minn = 10000;
	memset(prime, true, sizeof(prime));
	prime[1] = false;
	scanf("%d %d", &m, &n);
	for(int i = 2;i * i <= 10000;i++){
		if(prime[i]){
			for(int j = i * 2;j <= 10000;j += i){
				prime[j] = false;
			}
		}
	}
	for(int i = m;i <= n;i++){
		if(prime[i])
			sum += i, minn = std::min(minn, i);
	}
	if(!sum)	printf("-1\n");
	else	printf("%d\n%d\n", sum, minn);
}