#include <stdio.h>

int main(){
	int t, n, m, i, j, root1, root2, arr[10000][2] = {0}, group[1001] = {0};
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int sum = 0;
		scanf("%d %d", &n, &m);
		for(j = 0;j < m;j++)
			scanf("%d %d", &arr[j][0], &arr[j][1]);
		for(j = 1;j <= n;j++)
			group[j] = j;
		for(j = 0;j < m;j++){
			root1 = arr[j][0], root2 = arr[j][1];
			while(root1 != group[root1])
				root1 = group[root1];
			while(root2 != group[root2])
				root2 = group[root2];
			if(root1 == root2)	continue;
			sum++, group[root2] = group[root1];
		}
		printf("%d\n", sum);
	}
}