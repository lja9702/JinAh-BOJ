#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1: (*(int*) a < *(int*) b ? -1 : 0));
}

int main(){
	int n, i;
	scanf("%d", &n);
	int dis[n][3], cost[n][3], cnt = 0;
	for(i = 0;i < n;i++){
		scanf("%d %d", &dis[i][0], &dis[i][1]);
		cost[i][1] = dis[i][0], cost[i][0] = dis[i][1];
		cost[i][2] = i, dis[i][2] = i;
	}
	qsort(dis, n, sizeof(dis[0]), compare);
	qsort(cost, n, sizeof(cost[0]), compare);
	for(i = n - 1;i >= 0;i--){
		int j = 0, temp = 0, idx, check = 1;
		for(j = 0;j < n;j++){
			if(i == j)	continue;
			if(dis[i][0] > dis[j][0]){
				if(dis[i][1] >= dis[j][1])
					check = 0;
			}
		}
		for(j = 0;j < n;j++){
			if(dis[i][2] == cost[j][2]){
				idx = j;
				break;
			}
		}
		for(j = n - 1;j >= 0;j--){
			if(i == j)	continue;
			if(cost[idx][0] > cost[j][0]){
				if(cost[idx][1] >= cost[j][1])
					check = 0;
			}
		}
		if(check == 1)
			cnt++;
	}
	printf("%d\n", cnt);
}