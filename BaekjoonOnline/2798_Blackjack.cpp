#include <cstdio>

int main(){
	int i, j, k, n, m, arr[101] = {0}, max = 0, check = 0;
	scanf("%d %d", &n, &m);
	for(i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for(i = 0;i < n - 2;i++){
		for(j = i + 1;j < n - 1;j++){
			for(k = j + 1;k < n;k++){
				int temp = arr[i] + arr[j] + arr[k];
				if(temp > m)
					continue;
				if(max < temp)
					max = temp; 
			}
		}
	}
	printf("%d\n", max);
}