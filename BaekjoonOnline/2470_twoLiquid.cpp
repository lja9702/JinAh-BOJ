#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long arr[100001] = {0};
int main(){
	long long n, i;
	scanf("%lld", &n);
	for(i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	sort(arr, arr + n);
	long long x = 0, y = n - 1, minX = 0, minY = n - 1;
	min = abs(arr[x] + arr[y]);
	while(x != y){
		if(abs(arr[x] + arr[y]) < min){
			min = abs(arr[x] + arr[y]);
			minX = x, minY = y;
		}
		if(arr[x] < 0 && arr[x + 1] > 0)
			y--;
		else if(abs(arr[x + 1] + arr[y]) <= abs(arr[x] + arr[y - 1]))
			x++;
		else
			y--;
	}
	printf("%lld %lld\n", arr[minX], arr[minY]);
}