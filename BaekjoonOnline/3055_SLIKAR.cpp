#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
char arr[51][51] = {0};
int r, c, cnt = 0, finx, finy;
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
bool check[51][51], go[51][51], flag = false;
queue <pair<pair<int, int>, int> > wat;
queue <pair<pair<int, int>, int> > du;
void wat_bfs(){
	while(!wat.empty() && wat.front().second == cnt){
		int x = wat.front().first.first, y = wat.front().first.second, dep = wat.front().second;
		wat.pop();
		for(int i = 0;i < 4;i++){
			int tempx = x + dist[i][0], tempy = y + dist[i][1];
			if(tempx == finx && tempy == finy)
				continue;
			if(tempx >= 0 && tempx < r && tempy >= 0 && tempy < c){
				if(!check[tempx][tempy]){
					wat.push(make_pair(make_pair(tempx, tempy), dep + 1));
					check[tempx][tempy] = true;
				}
			}
		}
	}
}
void du_bfs(){
	while(!du.empty() && du.front().second == cnt){
		int x = du.front().first.first, y = du.front().first.second, dep = du.front().second;
		du.pop();
		for(int i = 0;i < 4;i++){
			int tempx = x + dist[i][0], tempy = y + dist[i][1];
			if(tempx == finx && tempy == finy){
				printf("%d\n", dep + 1);
				flag = true;
				return;
			}
			if(tempx >= 0 && tempx < r && tempy >= 0 && tempy < c){
				if(!check[tempx][tempy] && !go[tempx][tempy]){
					du.push(make_pair(make_pair(tempx, tempy), dep + 1));
					go[tempx][tempy] = true;
				}
			}
		}
	}
}
int main(){
	scanf("%d %d", &r, &c);
	memset(check, false, sizeof(check));
	memset(go, false, sizeof(go));
	for(int i = 0;i < r;i++){
		scanf("%s", arr[i]);
		for(int j = 0;j < c;j++){
			if(arr[i][j] == '*')
				wat.push(make_pair(make_pair(i, j), 0)), check[i][j] = true;
			else if(arr[i][j] == 'S')
				du.push(make_pair(make_pair(i, j), 0)), go[i][j] = true;
			else if(arr[i][j] == 'D')
				finx = i, finy = j;
			else if(arr[i][j] == 'X')
				check[i][j] = true, go[i][j] = true;
		}
	}
	while(!du.empty() && !flag){
		wat_bfs();
		du_bfs();
		cnt++;
	}
	if(!flag)	printf("KAKTUS\n");
}
