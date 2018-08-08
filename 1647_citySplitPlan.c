#include <stdio.h>
#include <stdlib.h>
int graph[1000000][3] = {0}, group[100001] = {0}, depth[100001] = {0};
int compare(const void* a, const void* b){
	int *p1 = (int*) a+2, *p2 = (int*) b+2;
	return (*p1 > *p2 ? 1 : (*p1 < *p2 ? -1 : 0)); 
}

int main(){
	long long sum = 0;
	int root1, root2, n, m, i, j;
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++)	group[i] = i, depth[i] = 1;
	for(i = 0;i < m;i++)
		scanf("%d %d %d", &graph[i][0], &graph[i][1], &graph[i][2]);
	qsort(graph, m, sizeof(graph[0]), compare);
	for(i = 0;i < m;i++){
		if(n == 2)	break;
		
		root1 = graph[i][0], root2 = graph[i][1];
		while(root1 != group[root1])	root1 = group[root1];
		while(root2 != group[root2])	root2= group[root2];
		
		if(root1 == root2)	continue;
		if(depth[root1] > depth[root2])
			group[root2] = group[root1];
		else if(depth[root1] < depth[root2])
			group[root1] = group[root2];
		else
			depth[root1]++, group[root2] = group[root1];
		
		sum += graph[i][2], n--;
	}
	printf("%lld\n", sum);
}