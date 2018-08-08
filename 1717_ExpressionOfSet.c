#include <stdio.h>
int group[1000001] = {0}, depth[1000001] = {0};
int main(){
	int i, j, n, m, input, a, b;
	scanf("%d %d", &n, &m);
	for(i = 0;i <= n;i++)
		group[i] = i, depth[i] = 1;
	for(i = 0;i < m;i++){
		scanf("%d %d %d", &input, &a, &b);
		while(a != group[a])	a = group[a];
		while(b != group[b])	b = group[b];
		if(!input){
			if(a == b)	continue;
			if(depth[a] > depth[b])
				group[b] = group[a];
			else if(depth[b] > depth[a])
				group[a] = group[b];
			else
				depth[a]++, group[b] = group[a];
		}
		else{
			if(group[a] == group[b])
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}