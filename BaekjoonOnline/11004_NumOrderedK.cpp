#include <cstdio>
#include <algorithm>

int main(){
	int N, K, i;
	scanf("%d %d", &N, &K);
	int arr[N];
	for(i = 0;i < N;i++)
		scanf("%d", &arr[i]);
	std::sort(arr, arr+N);
	printf("%d\n", arr[K-1]);
}