#include <cstdio>
#include <queue>

using namespace std;
typedef struct _cabbage{
	int data;
	int check;
	int x;
	int y;
}Cabbage;

int main(){
	queue <Cabbage> Q;
	int t, i, r, p, q, dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int m, n, k;
		Cabbage cab[51][51];
		scanf("%d %d %d", &m, &n, &k);

		for(p = 0;p < n;p++){
			for(q = 0;q < m;q++){
				cab[p][q].x = p, cab[p][q].y = q;
				cab[p][q].check = 0, cab[p][q].data = 0;
			}
		}
		for(p = 0;p < k;p++){
			int a, b;
			scanf("%d %d", &a, &b);
			cab[b][a].data = 1;
		}
		int cnt = 0;
		for(p = 0;p < n;p++){
			for(q = 0;q < m;q++){
				if(cab[p][q].data == 1 && cab[p][q].check == 0){
					cab[p][q].check = 1;
					Q.push(cab[p][q]);
					while(!Q.empty()){
						int x = Q.front().x, y = Q.front().y;
						Q.pop();
						for(r = 0;r < 4;r++){
							int temp_x = x + dir[r][0], temp_y = y + dir[r][1];
							if(temp_x >= 0 && temp_x < n && temp_y >= 0 && temp_y < m){
								if(cab[temp_x][temp_y].data == 1 && cab[temp_x][temp_y].check == 0){
									cab[temp_x][temp_y].check = 1;
									Q.push(cab[temp_x][temp_y]);
								}
							}
						}
					}
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);	
	}
}