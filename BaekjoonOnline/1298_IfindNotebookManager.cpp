#include <cstdio>
#include <vector>
using namespace std;
vector<int> matA, matB;
vector<bool> vist;
int n, m;
bool adj[101][101];
bool dfs(int a){
	if(vist[a])	return 0;
	vist[a] = 1;
	for(int b = 1;b <= n;b++){
		if(adj[a][b] && (matB[b] == -1 || dfs(matB[b]))){
			matA[a] = b, matB[b] = a;
			return 1;
		}
	}
	return 0;
}
int main(){
	int a, b, cnt = 0;
	scanf("%d %d", &n, &m);
	matA = vector<int>(n + 1, -1), matB = vector<int>(n + 1, -1);
	for(int i = 0;i < m;i++){
		scanf("%d %d", &a, &b);
		adj[a][b] = 1;
	}
	for(int st = 1;st <= n;st++){
		vist = vector<bool>(n + 1, 0);
		if(dfs(st))	cnt++;
	}
	printf("%d\n", cnt);
}