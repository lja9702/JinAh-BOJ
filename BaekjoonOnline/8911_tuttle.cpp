#include <cstdio>
#include <cstring>

int main(){
	int i, t;
	int dir[5][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	scanf("%d", &t);
	while(t--){
		int x = 0, y = 0, cur = 0, min_X = 0, max_X = 0, min_Y = 0, max_Y = 0;
		char in[501] = {0};
		scanf("%s", &in);
		for(i = 0;i < strlen(in);i++){
			if(in[i] == 'F'){
				x += dir[cur][0];
				y += dir[cur][1];
			}
			else if(in[i] == 'B'){
				int temp = (cur + 2) % 4;
				x += dir[temp][0];
				y += dir[temp][1];
			}
			else if(in[i] == 'L'){
				cur--;
				if(cur < 0)
					cur = 3;
			}
			else if(in[i] == 'R'){
				cur++;
				if(cur > 3)
					cur = 0;
			}
			if(x < min_X)	min_X = x;
			if(x > max_X)	max_X = x;
			if(y < min_Y)	min_Y = y;
			if(y > max_Y)	max_Y = y;
		}
		printf("%d\n", (max_X - min_X) * (max_Y - min_Y));
	}
}