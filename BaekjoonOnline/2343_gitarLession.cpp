#include <cstdio>
int arr[100001] = {0}, n, m, maxi, min = 1 << 29;
int binary(int st, int end){
	int i, j, cnt = 1, sum = 0, mid = (st + end) / 2;
	for(i = 0;i < n;i++){
		sum += arr[i];
		if(sum > mid)
			cnt++, sum = arr[i];
	}
	if(st > end)	return 0;
	if(cnt <= m){
		min = mid;
		return binary(st, mid - 1);
	}
	else if(cnt > m){
		return binary(mid + 1, end);
	}
}
int main(){
	int max = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0;i < n;i++){
		scanf("%d", &arr[i]);
		maxi += arr[i];
		if(max < arr[i])	max = arr[i];
	}
	binary(max, maxi);
	printf("%d\n", min);
}