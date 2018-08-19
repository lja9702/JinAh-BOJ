#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	int dist[n -1], city[n];
	for(i = 0;i < n - 1;i++)
		scanf("%d", &dist[i]);
	for(i = 0;i < n;i++)
		scanf("%d", &city[i]);
	int min = 0;
	long long cost = 0, temp = 0;
	for(i = 0;i < n - 1;i++){
		if(city[min] > city[i]){
			cost += temp * city[min];
			min = i, temp = 0;
		}
		temp += dist[i];
	}
	if(temp != 0)
		cost += temp * city[min];
	printf("%lld\n", cost);
}