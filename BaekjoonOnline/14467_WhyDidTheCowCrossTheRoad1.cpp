#include <cstdio>
#include <cstring>
int arr[11] = {0};
int main(){
	int n, a, b, cnt = 0;
	memset(arr, -1, sizeof(arr));
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d %d", &a, &b);
		if(arr[a] == -1)	arr[a] = b;
		else if(arr[a] != b)
			arr[a] = b, cnt++;
	}
	printf("%d\n", cnt);
}