#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
queue <pair<int, int> > Q;
bool check[301][301];
int n, m, arr[301][301] = {0}, cnt = 1, res = 0;
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
void bfs(int x, int y){
	Q.push(make_pair(x, y)), check[x][y] = true;
	while(!Q.empty()){
		int p = Q.front().first, q = Q.front().second;
		Q.pop();
		for(int i = 0;i < 4;i++){
			int np = p + dist[i][0], nq = q + dist[i][1];
			if(np >= 0 && np < n && nq >= 0 && nq < m){
				if(arr[np][nq] && !check[np][nq])
					Q.push(make_pair(np, nq)), check[np][nq] = true;
				else if(!arr[np][nq] && !check[np][nq] && arr[p][q]){
					arr[p][q]--;
				}
			}
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++)
			scanf("%d", &arr[i][j]);
	}
	while(cnt == 1){
		cnt = 0;
		bool flag = false;
		memset(check, false, sizeof(check));
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if(arr[i][j] && !check[i][j]){
					bfs(i, j);
					cnt++, flag = true;
				}
			}
		}
		if(!flag){
			printf("0\n");
			return 0;
		}
		res++;
	}
	printf("%d\n", res - 1);
}