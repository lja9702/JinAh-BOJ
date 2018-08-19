#include <cstdio>
#include <map>
using namespace std;
bool check[1001][1001];
char arr[1001][1001];
int n, m, cnt = 0;
int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0;i < n;i++)	scanf("%s", arr[i]);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(!check[i][j]){
				int x = i, y = j, ch = 1;
				map<pair<int, int>, bool> m;
				while(!check[x][y]){
					check[x][y] = 1, m[make_pair(x, y)] = 1;
					char c = arr[x][y];
					if(c == 'N')	x -= 1;
					else if(c == 'S')	x += 1;
					else if(c == 'W')	y -= 1;
					else if(c == 'E')	y += 1;
					if(check[x][y]){
						if(!m[make_pair(x, y)])	ch = 0;
						break;
					}
				}
				if(ch)	cnt++;
			}
		}
	}
	printf("%d\n", cnt);
}