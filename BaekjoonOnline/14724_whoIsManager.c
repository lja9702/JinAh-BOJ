#include <stdio.h>

int main(){
	char group[9][20] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
	int res = 0, n, i, j, a, arr[9] = {0};
	scanf("%d", &n);
	for(i = 0;i < 9;i++){
		int max = 0;
		for(j = 0;j < n;j++){
			scanf("%d", &a);
			if(max < a)		max = a;
		}
		arr[i] = max;
	}
	for(i = 1;i < 9;i++){
		if(arr[i] > arr[res])
			res = i;
	}
	printf("%s\n", group[res]);
}