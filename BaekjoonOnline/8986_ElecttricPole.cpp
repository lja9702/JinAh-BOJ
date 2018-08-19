#include <cstdio>

long long arr[100001] = {0}, n;
long long abs(long long n){
	return n > 0 ? n : -n;
}
long long calc(long long x){
	long long res = 0;
	for(int i = 1;i < n;i++)
		res += abs((i * x) - arr[i]);
	return res;
}
long long binary(long long st, long long end){
	long long mid = (st + end) / 2;
	long long x1 = calc(mid - 1), x2 = calc(mid), x3 = calc(mid + 1);
	if(x1 >= x2 && x2 <= x3)
		return x2;
	else if(x1 < x2 && x2 < x3)
		return binary(st, mid - 1);
	else
		return binary(mid + 1, end);
}
int main(){
	int i;
	scanf("%lld", &n);
	for(i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	printf("%lld\n", binary(0, 1ll << 40));
}