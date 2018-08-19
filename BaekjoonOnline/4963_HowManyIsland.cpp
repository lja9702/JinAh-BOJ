#include <cstdio>
#include <queue>

using namespace std;

typedef struct _location{
	int x;
	int y;
	int is_island;
}Locat;

int main(){
	int w, h, i, j, p, q;
	while(scanf("%d %d", &w, &h) != EOF){
		if(w == 0 && h == 0)
			return 0;
		queue <Locat> Q;
		Locat locat[51][51] = {0};
		int check[51][51] = {0}, cnt = 0;
		int dir_x[8] = {-1, -1, -1, 0, 0, 1, 1, 1}, dir_y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
		for(i = 1;i <= h;i++){
			for(j = 1;j <= w;j++){
				scanf("%d", &locat[i][j].is_island);
				locat[i][j].x = i;
				locat[i][j].y = j;
			}
		}
		for(i = 1;i <= h;i++){
			for(j = 1;j <= w;j++){
				if(locat[i][j].is_island == 1 && check[i][j] == 0){
					Q.push(locat[i][j]);
					check[i][j] = 1;
					while(!Q.empty()){
						int x = Q.front().x, y = Q.front().y;
						Q.pop();
						for(p = 0;p < 8;p++){
							if(x + dir_x[p] >= 1 && x + dir_x[p] <= h && y + dir_y[p] >= 1 && y+ dir_y[p] <= w){
								if(locat[x + dir_x[p]][y + dir_y[p]].is_island == 1 && check[x + dir_x[p]][y + dir_y[p]] == 0){
									Q.push(locat[x + dir_x[p]][y + dir_y[p]]);
									check[x + dir_x[p]][y + dir_y[p]] = 1;
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