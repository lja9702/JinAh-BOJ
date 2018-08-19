#include <cstdio>
#include <utility>
#include <cstring>
#include <queue>
using namespace std;
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}, n;
bool go[101][101], cow[101][101];
int arr[101][101][4] = {0}, cnt = 0, res[10001] = {0};
void bfs(int a, int b){
	queue<pair<int, int> > Q;
	Q.push(make_pair(a, b));
	while(!Q.empty()){
		int x = Q.front().first, y = Q.front().second;
		Q.pop();
		for(int i = 0;i < 4;i++){
			int tx = x + dist[i][0], ty = y + dist[i][1];
			if(tx >= 1 && tx <= n && ty >= 1 && ty <= n && !go[tx][ty] && !arr[x][y][i]){
				Q.push(make_pair(tx, ty)), go[tx][ty] = 1;
				if(cow[tx][ty])	res[cnt]++;	
			}
		}
	}
}
int main(){
	int k, r, a, b;
	scanf("%d %d %d", &n, &k, &r);
	for(int i = 0;i < r;i++){
		int r, c, rp, cp;
		scanf("%d %d %d %d", &r, &c, &rp, &cp);
		for(int j = 0;j < 4;j++){
			if(r + dist[j][0] == rp && c + dist[j][1] == cp){
				arr[r][c][j] = 1;
				if(j < 2)	arr[rp][cp][j + 2] = 1;
				else	arr[rp][cp][j - 2] = 1;
				break;
			}
		}
	}
	for(int i = 0;i < k;i++){
		scanf("%d %d", &a, &b);
		cow[a][b] = 1;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(!go[i][j] && cow[i][j]){
				go[i][j] = 1, cnt++, res[cnt]++;
				bfs(i, j);
			}
		}
	}
	int tot = 0, len = cnt;
	for(int i = 1;i < len;i++){
		tot += (k - res[i]) * res[i];
		k -= res[i];
	}
	printf("%d\n", tot);
}