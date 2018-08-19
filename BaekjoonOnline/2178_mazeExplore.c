#include <stdio.h>
int arr[101][101] = {0}, check[101][101] = {0};
int main(){
	int i, j, x = 1, y = 1, n, m, stack[2][10001] = {0}, top = -1;
	char in;
	scanf("%d %d", &n, &m);
	getchar();
	for(i = 1;i <=n;i++){
		for(j = 1;j <= m;j++){
			scanf("%c", &in);
			arr[i][j] = in - '0';
		}
		getchar();
	}

	stack[0][++top] = 1, stack[0][top] = 1;
	check[1][1] = 0;
	while(top > -1){
		x = stack[0][top], y = stack[1][top];
		top--;
		if((check[x + 1][y] == 0 || check[x + 1][y] > check[x][y] + 1) && arr[x + 1][y] == 1){
			stack[0][++top] = x + 1, stack[1][top] = y;
			check[x + 1][y] = check[x][y] + 1;
		}
		if((check[x][y - 1] == 0 || check[x][y - 1] > check[x][y] + 1) && arr[x][y - 1] == 1){
			stack[0][++top] = x, stack[1][top] = y - 1;
			check[x][y - 1] = check[x][y] + 1;
		}
		if((check[x - 1][y] == 0 || check[x - 1][y] > check[x][y] + 1) && arr[x - 1][y] == 1){
			stack[0][++top] = x - 1, stack[1][top] = y;
			check[x - 1][y] = check[x][y] + 1;
		}
		if((check[x][y + 1] == 0 || check[x][y + 1] > check[x][y] + 1) && arr[x][y + 1] == 1){
			stack[0][++top] = x, stack[1][top] = y + 1;
			check[x][y + 1] = check[x][y] + 1;
		}
	}
	printf("%d\n", check[n][m]);
}
