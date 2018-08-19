#include <stdio.h>
#include <stdlib.h>
int arr[500001] = {0}, check[500001] = {0};
int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0));
}
int main(){
	int n, i, j, sum = 0;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	qsort(arr, n, sizeof(int), compare);
	double Aver = (double) sum / n;
	int max = 0;
	for(i = 0;i < n ;){
		int temp = i;
		while(arr[i] == arr[temp]){
			check[i]++, temp++;
		}
		if(check[max] < check[i])
			max = i;
		i = temp;
	}
	int temp = 0;
	for(i = 0;i < n;i++){
		if(check[max] == check[i]){
			temp++;
			max = i;
			if(temp == 2)
				break;
		}
	}
	printf("%.0lf\n", Aver);
	printf("%d\n", arr[n / 2]);
	printf("%d\n", arr[max]);
	printf("%d\n", arr[n - 1] - arr[0]);
}