#include <cstdio>
int main(){
	int i, n, arr[51] = {0}, left = 0, right = 0, maxR = 0, maxL = 0;
	scanf("%d", &n);
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for(i = 0;i < n;i++){
		if(arr[i] > maxL)	maxL = arr[i], left++;
		if(arr[n - 1 - i] > maxR)	maxR = arr[n - 1- i], right++;	
	}
	printf("%d\n%d\n", left, right);
}