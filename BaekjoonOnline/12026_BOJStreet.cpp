#include <cstdio>

int main(){
	int n, cnt = 0, i, j, bef_idx = 0, dp[1001] = {0};
	char arr[1001] = {0}, check[3] = {'B', 'O', 'J'};
	scanf("%d %s", &n, arr);
	for(i = 1;i < n - 1;i++){
		if(bef_idx < 2 && bef == check[bef_idx] && arr[i] == check[bef_idx + 1]){
			dp[i] = (i - bef_idx) * (i - bef_idx);
			bef = check[bef_idx], bef_idx++;
	}
	if()
}