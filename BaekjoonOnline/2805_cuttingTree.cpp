#include <cstdio>
#include <algorithm>

int binarySearch(int left, int right, int tar, int* arr, int n){	
	int i, mid = (left + right) / 2;
	long long sum = 0;
	for(i = 0;i < n;i++){
		if(arr[i] - mid >= 0)
			sum += arr[i] - mid;
	}
	if(left > right)
		return mid;
	else{
		if(sum == tar)
			return mid;
		else if(sum < tar)
			return binarySearch(left, mid - 1, tar, arr, n);
		else
			return binarySearch(mid + 1, right, tar, arr, n);
	}
}

int main(){
	int n, m, i;
	scanf("%d %d", &n, &m);
	int arr[n];
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	std::sort(arr, arr + n);
	int result = binarySearch(0, arr[n - 1], m, arr, n);
	printf("%d\n", result);
}