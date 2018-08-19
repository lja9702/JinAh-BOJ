#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
int n, m, res[10001] = {0};
bool check[10001] = {0};
vector<int> v[10001];
int dfs(int cur, int x){
	vector<int>::iterator iter;
	for(iter = v[x].begin();iter != v[x].end();iter++){
		if(check[*iter])	continue;
		res[cur]++;
		check[*iter] = true;
		dfs(cur, *iter);
	}
}
int main(){
	int i, j, a, b, maxi = 0;
	scanf("%d %d", &n, &m);
	for(i = 0;i < m;i++){
		scanf("%d %d", &a, &b);
		v[b].push_back(a);
	}
	vector<int>::iterator iter;
	for(i = 1;i <= n;i++){
		memset(check, false, sizeof(check));
		check[i] = true;
		for(iter = v[i].begin();iter != v[i].end();iter++){
			if(check[*iter])	continue;
			res[i]++;
			check[*iter] = true;
			dfs(i, *iter);
		}
		maxi = max(maxi, res[i]);
	}
	for(i = 1;i <= n;i++){
		if(maxi == res[i])
			printf("%d ", i);
	}
	printf("\n");
}