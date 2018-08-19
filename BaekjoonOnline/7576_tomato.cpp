#include <cstdio>
#include <queue>

using namespace std;
typedef struct _node
{
	int x;
	int y;
	int cnt;
}node;
int arr[1001][1001] = {0}, check[1001][1001] = {0};

int main(){
	int i, j, m, n, dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
	int tempcnt = 0;
	scanf("%d %d", &m, &n);
	queue <node> q;
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%d", &arr[i][j]);
			check[i][j] = arr[i][j];
			if(arr[i][j] == 1){
				node temp;
				temp.x = i, temp.y = j;
				temp.cnt = 0;
				q.push(temp);
				tempcnt++;
			}
		}
	}

	if(tempcnt == (m * n)){
		printf("0\n");
		return 0;
	}
	int max = 0;
	while(!q.empty()){
		node front = q.front();
		int tempx = front.x, tempy = front.y, tcnt = front.cnt;
		for(i = 0;i < 4;i++){
			if(check[tempx + dir[i][0]][tempy + dir[i][1]] == 0 && tempx + dir[i][0] >= 0 
				&& tempx + dir[i][0] < n && tempy + dir[i][1] >= 0 && tempy + dir[i][1] < m){
				node temp;
				temp.x = tempx + dir[i][0];
				temp.y = tempy + dir[i][1];
				temp.cnt = tcnt + 1;
				if(max < temp.cnt)
					max = temp.cnt;
				check[temp.x][temp.y] = 1;
				q.push(temp);
			}
		}
		q.pop();
	}

	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			if(check[i][j] == 0){
				printf("-1\n");
				return 0;
			}
		}
	}
	printf("%d\n", max);
}