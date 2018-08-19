#include <cstdio>
int arr[100001] = {0};
bool check[100001]; 
int main(){
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	for(int i = 1;i <= n;i++)	arr[i] = i;
	for(int i = 0;i < m;i++){
		scanf("%d %d", &a, &b);
		arr[a]++, arr[b]--;
	}
	for(int i = 1;i <= n;i++){
		if(check[arr[i]]){
			printf("-1\n");
			return 0;
		}
		check[arr[i]] = 1;
	}
	for(int i = 1;i <= n;i++)
		printf("%d ", arr[i]);
	printf("\n");
}