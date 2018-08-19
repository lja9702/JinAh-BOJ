#include <cstdio>
#include <vector>
using namespace std;
bool adj[210][210] = {0};
//adj는 인접행렬
vector<int> aMatch, bMatch;
//aMatch는 소, bMatch는 축사, 각각의 매칭된 상대편의 번호를 벡터에 저장
vector<bool> visited;
//visited는 매칭 시킬 소를 기준으로 다른 소들이 매칭 되어있는지 체크하는 벡터
int n, m, s, t, size = 0;
bool dfs(int a){
	if(visited[a])	return 0;
	visited[a] = 1;
	for(int b = 1;b <= m;b++){
		if(adj[a][b]){
			if(bMatch[b] == -1 || dfs(bMatch[b])){
                //만약 소와 축사가 매칭되어있다면 dfs로 넘어가서
                //어떠한 특정 소가 매칭할 때 축사가 겹친다면
                //매칭된 소가 다른 축사와 연결되어 변경 할 수 있는지 dfs를 돌린다.
                //축사가 연결되어있지 않다면 고민하지않고 바로 매칭!
				aMatch[a] = b, bMatch[b] = a;
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	scanf("%d %d", &n, &m);
	aMatch = vector<int>(n + 1, -1);
	bMatch = vector<int>(m + 1, -1);
	for(int i = 1;i <= n;i++){
		scanf("%d", &s);
		for(int j = 0;j < s;j++){
			scanf("%d", &t);
			adj[i][t] = 1;
		}
	}
	for(int st = 1;st <= n;st++){
        //visited는 st소를 매칭시키려고 시도할 때 마다 초기화를 꼭 시켜줘야 한다.
		visited = vector<bool>(n + 1, 0);
		if(dfs(st))	++size;
	}
	printf("%d\n", size);
}