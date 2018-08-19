#include <cstdio>
#include <vector>
using namespace std;
bool adj[1020][1020];
vector<int> matA, matB;
vector<bool> vis;
int n, m, s, t, cnt = 0;
bool dfs(int a){
	if(vis[a])	return 0;
	vis[a] = 1;
	for(int b = 1;b <= m;b++){
		if(adj[a][b] && (matB[b] == -1 || dfs(matB[b]))){
			matA[a] = b, matB[b] = a;
			return 1;
		}
	}
	return 0;
}
int main(){
	scanf("%d %d", &n, &m);
	matA = vector<int>(n + 1, -1), matB = vector<int>(m + 1, -1);
	for(int i = 1;i <= n;i++){
		scanf("%d", &s);
		for(int j = 0;j < s;j++){
			scanf("%d", &t);
			adj[i][t] = 1;
		}
	}
	for(int st = 1;st <= n;st++){
		vis = vector<bool>(n + 1, 0);
		if(dfs(st))	cnt++;
	}
	printf("%d\n", cnt);
}