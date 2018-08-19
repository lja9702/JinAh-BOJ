#include <cstdio>

int main(){
	int i, j, max = 0;
	double arr[4] = {0}, temp[4] = {0};
	for(i = 0;i < 4;i++)
		scanf("%lf", &arr[i]);
	temp[0] = arr[0] / arr[2] + arr[1] / arr[3], temp[1] = arr[2] / arr[3] + arr[0] / arr[1];
	temp[2] = arr[3] / arr[1] + arr[2] / arr[0], temp[3] = arr[1] / arr[0] + arr[3] / arr[2];
	for(i = 0;i < 4;i++){
		if(temp[max] < temp[i])
			max = i;
	}
	printf("%d\n", max);
}