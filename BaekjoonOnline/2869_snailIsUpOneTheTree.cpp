#include <cstdio>
long long min = 1 << 30;
void binary_search(long long start, long long fin, long long a, long long b, long long v){
	long long i, j, mid = (start + fin) / 2;
	if(start > fin)
		return ;
	else if((mid - 1) * (a - b) + a >= v){
		if(min > mid)
			min = mid;
		binary_search(start, mid - 1, a, b, v);
	}
	else
		binary_search(mid + 1, fin, a, b, v);
}
int main(){
	long long a, b, v, max;
	scanf("%lld %lld %lld", &a, &b, &v);
	max = (v % (a - b) == 0 ? v / (a - b) : v / (a - b) + 1);
	binary_search(1, max, a, b, v);
	printf("%lld\n", min);
}
