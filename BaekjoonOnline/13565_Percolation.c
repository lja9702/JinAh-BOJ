#include <stdio.h>
int arr[1002][1002] = {0}, check[1002][1002] = {0};

typedef struct Queue{
	int X;
	int Y;
}queue;

queue Q[1100000];

int main(){
	int i, j, m, n, top = -1, x, y;

	scanf("%d %d", &m, &n);

	for(i = 1;i <= m;i++){
		char in[1001] = {0};
		scanf("%s", &in);
		for(j = 0;j < n;j++){
			arr[i][j + 1] = in[j] - '0';
			check[i][j + 1] = arr[i][j + 1];
		}
	}

	Q[++top].X = 0, Q[top].Y = 1;
	int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}, next_x, next_y, k;
	while(top > -1){
		x = Q[0].X, y = Q[0].Y;
		for(k = 0;k < 4;k++){
			next_x = x + dir[k][0];
			next_y = y + dir[k][1];

			if(next_x >= 0 && next_x <= m + 1 && next_y > 0 && next_y <= n){
				if(arr[next_x][next_y] == 0 && check[next_x][next_y] == 0){
					Q[++top].X = next_x, Q[top].Y = next_y;
					check[next_x][next_y] = -1;
				}
			}
		}
		for(i = 1;i <= top;i++){
			Q[i - 1] = Q[i];
		}
		top--;
	}

	int ck = 0;
	for(i = 1;i <= n;i++){
		if(check[m + 1][i] == -1)
			ck = 1;
	}
	if(ck == 1)
		printf("YES\n");
	else
		printf("NO\n");
}