#include <cstdio>
int parent[1000001] = {0}, height[1000001] = {0};
int main(){
	int i, j, n, m, men, a, b;
	scanf("%d %d", &n, &m);
	for(int i = 1;i <= n;i++)
		parent[i] = i, height[i] = 1;
	for(i = 0;i < m;i++){
		scanf("%d %d %d", &men, &a, &b);
		int rootA = parent[a], rootB = parent[b];
			while(parent[rootA] != rootA)
				rootA = parent[rootA];
			while(parent[rootB] != rootB)
				rootB = parent[rootB];
		
		if(men){
			if(rootA == rootB)	printf("YES\n");
			else	printf("NO\n");
		}
		else{
			if(rootA == rootB)	continue;
			if(height[rootA] > height[rootB])
				parent[rootB] = rootA;
			else if(height[rootA] < height[rootB])
				parent[rootA] = rootB;
			else
				height[rootA]++, parent[rootB] = rootA;
		}
	}
}