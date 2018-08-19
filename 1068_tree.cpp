#include <cstdio>
#include <queue>
using namespace std;
int main(){
	queue<int> Q;
	int i, erase, n, par[51] = {0}, son[51] = {0}, cnt = 0;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d", &par[i]);
		son[par[i]]++;
	}
	scanf("%d", &erase);
	Q.push(erase);
	son[erase] = -1, son[par[erase]]--;
	while(!Q.empty()){
		int front = Q.front();
		Q.pop();
		for(i = 0;i < n;i++){
			if(front == par[i])
				Q.push(i), son[i] = -1;
		}
	}
	for(i = 0;i < n;i++){
		if(son[i] == 0)	cnt++;
	}
	printf("%d\n", cnt);
}