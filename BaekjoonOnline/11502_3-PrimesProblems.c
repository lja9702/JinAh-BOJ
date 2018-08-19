#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void* a, const void* b){
	return *(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0);
}
int main(){
	int t, k, i, j, p, prime[1001] = {0};
	prime[1] = 1;
	for(i = 2;i <= sqrt(1000);i++){
		for(j = i * 2;j <= 1000;j+=i){
			if(prime[j] == 0)
				prime[j] = 1;
		}
	}
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d", &k);
		int arr[3] = {0}, check = 0;
		for(j = 2;j <= k - 4;j++){
			if(prime[j] == 0){
				arr[0] = j;
				for(p = 2;p <= k - 2 - arr[0];p++){
					if(prime[p] == 0 && prime[k - p - j] == 0){
						arr[1] = p;
						arr[2] = k - p - j;
						check = 1;
						break;
					}
				}			
			}
			if(check == 1)
				break;
		}
		if(check == 1){
			qsort(arr, 3, sizeof(int), compare);
			printf("%d %d %d\n", arr[0], arr[1], arr[2]);
		}
		else
			printf("0\n");
	}
}
