#include <cstdio>

int main(){
	int n, max = 0, maxI;
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		int arr[5] = {0}, sum = 0;
		for(int j = 0;j < 5;j++){
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		for(int j = 0;j < 4;j++){
			for(int k = j + 1;k < 5;k++){
				if((sum - arr[j] - arr[k]) % 10 >= max)
					max = (sum - arr[j] - arr[k]) % 10, maxI = i;
			}
		}
	}
	printf("%d\n", maxI);
}