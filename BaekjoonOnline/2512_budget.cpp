#include <cstdio>
#include <algorithm>
using namespace std;

int arr[100001] = {0}, cut, M = 0, n;
int binary(int st, int end){
	int mid = (st + end) / 2, sum = 0;
	if(st > end)	return M;
	for(int i = 0;i < n;i++){
		if(mid > arr[i])	sum += arr[i];
		else	sum += mid;
	}
	if(cut == sum)	return mid;
	else if(cut < sum)
		binary(st, mid - 1);
	else{
		if(M < mid)	M = mid;
		binary(mid + 1, end);
	}
}
int main(){
	int i, j;
	scanf("%d", &n);
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	scanf("%d", &cut);
	sort(arr, arr + n);
	printf("%d\n", binary(1, arr[n - 1]));

}