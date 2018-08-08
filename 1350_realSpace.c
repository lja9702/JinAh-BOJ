#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int file[n], size;
	long long sum = 0;
	for(i = 0;i < n;i++)
		scanf("%d", &file[i]);
	scanf("%d", &size);
	for(i = 0;i < n;i++){
		if(file[i] == 0 || file[i] % size == 0)
			sum += file[i];
		else
			sum += (file[i] / size + 1) * size;
	}
	printf("%lld\n", sum);
}