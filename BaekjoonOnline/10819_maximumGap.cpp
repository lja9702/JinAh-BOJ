#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n, arr[10] = {0}, i, j, max = 0;
	scanf("%d", &n);
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	do{
		int sum = 0;
		for(i = 0;i < n - 1;i++)
			sum += abs(arr[i] - arr[i + 1]);
		if(sum > max)
			max = sum;
	}while(next_permutation(arr, arr + n));
	printf("%d\n", max);
}