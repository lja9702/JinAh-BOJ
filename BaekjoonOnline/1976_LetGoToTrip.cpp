#include <cstdio>
int n, m, arr[201][201] = {0}, parent[201] = {0}, depth[201] = {0};
void disJointSet(int a, int b){
	while(parent[a] != a)	a = parent[a];
	while(parent[b] != b)	b = parent[b];
	if(a == b)	return;
	if(depth[a] > depth[b])	parent[b] = a;
	else if(depth[a] < depth[b])	parent[a] = b;
	else	parent[b] = a, depth[a]++;
}
int main(){
	int i, j, go, temp = 0;
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++)
		parent[i] = i, depth[i] = 1;
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j])	disJointSet(i, j);
		}
	}
	for(i = 0;i < m;i++){
		scanf("%d", &go);
		while(parent[go] != go)	go = parent[go];
		if(!temp)	temp = go;
		else if(go != temp){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
}