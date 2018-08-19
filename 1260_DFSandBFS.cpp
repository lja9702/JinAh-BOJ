#include <cstdio>
#include <queue>
#include <stack>
using namespace std;

int arr[1001][1001] = {0}, B_check[1001] = {0}, D_check[1001] = {0};
int main(){
	queue <int> Q;
	stack <int> S;
	int i, j, n, m, v, a, b;
	scanf("%d %d %d", &n, &m, &v);
	for(i = 0;i < m;i++){
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	S.push(v);
	D_check[v] = 1;
	int che[1001] = {0};
	while(!S.empty()){
		int top = S.top(), check = 0;
		if(che[top] == 0){
			printf("%d ", top);
			che[top] = 1;
		}
		for(i = 1;i <= n;i++){
			if(i != top && arr[top][i] == 1 && D_check[i] == 0){
				S.push(i);
				D_check[i] = 1;
				check = 1;
				break;
			}
		}
		if(check == 0)
			S.pop();
	}
	printf("\n");
	Q.push(v);
	B_check[v] = 1;
	while(!Q.empty()){
		int frn = Q.front();
		printf("%d ", frn);
		Q.pop();
		for(i = 1;i <= n;i++){
			if(i != frn && arr[frn][i] == 1 && B_check[i] == 0){
				Q.push(i);
				B_check[i] = 1;
			}
		}
	}
	printf("\n");
}
