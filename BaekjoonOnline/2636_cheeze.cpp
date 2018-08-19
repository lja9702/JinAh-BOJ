#include <cstdio>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;
queue <pair<int, int> > Q;
int arr[102][102] = {0}, n, m, cnt = 0, res = 0, dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool check[102][102];
void bfs(int p, int q){
	Q.push(make_pair(p, q)), check[p][q] = true;
	while(!Q.empty()){
		int x = Q.front().first, y = Q.front().second;
		Q.pop();
		for(int i = 0;i < 4;i++){
			int nx = x + dist[i][0], ny = y + dist[i][1];
			if(nx >= 0 && nx <= n - 1 && ny >= 0 && ny <= m - 1 && !check[nx][ny]){
				if(!arr[nx][ny])
					Q.push(make_pair(nx, ny)), check[nx][ny] = true;
				else if(arr[nx][ny] == 1)
					arr[nx][ny] = -1;
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(arr[i][j] == -1)	arr[i][j] = 0;
		}
	}
}
int main(){
	int temp = 0;
	scanf("%d %d", &n, &m);
	memset(check, false, sizeof(check));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j] == 1)	temp++;
		}
	}
	while(temp){
		cnt = temp, res++, temp = 0;
		bfs(0, 0);
		for(int i = 1;i < n - 1;i++){
			for(int j = 1;j < m - 1;j++){
				if(arr[i][j] == 1)	temp++;
			}
		}
		memset(check, false, sizeof(check));
	}
	printf("%d\n%d\n", res, cnt);
}