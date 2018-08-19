#include <cstdio>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
	pair<int, int> arr[101];
	int n, a, b, res = 0;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d %d", &a, &b);
		arr[i] = make_pair(a, b);
	}
	sort(arr, arr + n);
	for(int i = 0;i < n;i++){
		res = max(res, arr[i].first);
		res += arr[i].second;
	}
	printf("%d\n", res);
}