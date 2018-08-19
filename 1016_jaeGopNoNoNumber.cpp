#include <cstdio>
long long min, max;
bool check[1000001], go[1000001];
int main(){
	scanf("%lld %lld", &min, &max);
	long long res = max - min + 1;
	for(long long i = 2;i * i <= max;i++){
		if(!check[i]){
			for(long long j = i;j * j <= max;j += i)	check[i] = 1;
			for(long long j = ((min - 1) / (i * i) + 1) * i * i;j <= max;j += (i * i)){
				if(!go[j - min])	go[j - min] = 1, res--;
			}
		}
	}
	printf("%lld\n", res);
}