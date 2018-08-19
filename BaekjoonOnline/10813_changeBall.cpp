#include <cstdio>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int n, m, i, j, k, arr[101] = {0};
	scanf("%d %d", &n, &m);
	for(k = 1;k <= n;k++)
		arr[k] = k;
	for(k = 0;k < m;k++){
		scanf("%d %d", &i, &j);
		swap(&arr[i], &arr[j]);
	}
	for(k = 1;k <= n;k++)
		printf("%d ", arr[k]);
}