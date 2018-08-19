#include <cstdio>

int main(){
	int n, arr[101] = {0}, a;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d", &a);
		for(int j = i;j > i - a;j--)
			arr[j] = arr[j - 1];  
		arr[i - a] = i + 1;
	}
	for(int i = 0;i < n;i++)
		printf("%d ", arr[i]);
	printf("\n");
}