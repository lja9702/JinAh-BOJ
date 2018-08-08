#include <cstdio>

using namespace std;
long long arr[10001] = {0};

long long binary_search(long long start, long long max, long long n, long long k){
	long long i, j, mid = (start + max) / 2, check = 0, sum = 0;
	for(i = 0;i < k;i++)
		sum += (arr[i] / mid);

	if(start > max)
		return mid;
	else if(sum >= n)
		binary_search(mid + 1, max, n, k);
	else if(sum <= n)
		binary_search(start, mid - 1, n, k);
}
int main(){
	long long i, k, n, max = 0;
	scanf("%lld %lld", &k, &n);
	for(i = 0;i < k;i++){
		scanf("%lld", &arr[i]);
		if(max < arr[i])
			max = arr[i];
	}
	printf("%lld\n", binary_search(1, max, n, k));
}