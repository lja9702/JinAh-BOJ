#include <stdio.h>

int main(){
	int t, i, j, n;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		scanf("%d", &n);
		int arr[n];
		for(j = 0;j < n;j++)
			scanf("%d", &arr[j]);
		int max = 0, check = 0;
		long long sum = 0;
		for(j = 1;j < n;j++){
			if(arr[j - 1] > arr[j])
				check++;
		}
		if(check == n - 1)
			printf("0\n");
		else{
			int before = max, num = n;
			while(num){
				for(j = before;j < n;j++){
					if(arr[max] < arr[j])
						max = j;
				}
				for(j = before;j <= max;j++){
					sum += arr[max] - arr[j];
					num--;
				}
				max++;
				before = max;
			}
			printf("%lld\n", sum);
		}
	}
}