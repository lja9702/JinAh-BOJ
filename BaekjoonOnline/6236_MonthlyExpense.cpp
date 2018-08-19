#include <cstdio>
#include <algorithm>
using namespace std;
int arr[100001] = {0}, n, m, res;
int binary(int st, int end){
	int mid = (st + end) / 2, cnt = 0, money = 0, i;
	if(st > end)	return 0;
	for(i = 0;i < n;i++){
		if(money - arr[i] < 0)
			money = mid, cnt++;
		money -= arr[i];
	}
	if(cnt <= m){
		res = mid;
		return binary(st, mid - 1);
	}
	else	return binary(mid + 1, end);
}
int main(){
	int i ,j, M = 0;
	scanf("%d %d", &n, &m);
	for(i = 0;i < n;i++){
		scanf("%d", &arr[i]);
		M = max(M, arr[i]);
	}
	binary(M, 1 << 30);
	printf("%d\n", res);
}