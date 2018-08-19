#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
bool check[101];
int arr[101][101] = {0};
queue <pair<int, int> > Q;
int main(){
	int n, m, i, j, a, b, p, q;
	scanf("%d %d %d %d", &n, &a, &b, &m);
	memset(check, false, sizeof(check));
	for(i = 0;i < m;i++){
		scanf("%d %d", &p, &q);
		arr[p][q] = 1, arr[q][p] = 1;
	}
	if(a == b){
		printf("0\n");
		return 0;
	}
	for(i = 1;i <= n;i++){
		if(i != a && arr[a][i] && !check[i])
			Q.push(make_pair(i, 1)), check[i] = true;
	}
	while(!Q.empty()){
		int val = Q.front().first, cnt = Q.front().second;
		Q.pop();
		if(val == b){
			printf("%d\n", cnt);
			return 0;
		}
		for(i = 1;i <= n;i++){
			if(i != val && arr[val][i] && !check[i])
				Q.push(make_pair(i, cnt + 1)), check[i] = true;
		}
	}
	printf("-1\n");
}