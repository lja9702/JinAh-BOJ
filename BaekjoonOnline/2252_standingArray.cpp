#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v[32001];
int n, m, cnt = 0, indeg[32001] = {0}, order[32001] = {0};
int main(){
	priority_queue <int, vector<int>, greater<int> > Q;
	scanf("%d %d", &n, &m);
	while(m--){
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b), indeg[b]++;
	}
	for(int i = 1;i <= n;i++){
		if(!indeg[i])	Q.push(i);
	}
	while(!Q.empty()){
		int fr = Q.top();
		order[cnt++] = fr;
		Q.pop();
		for(int i = 0;i < v[fr].size();i++){
			int temp = v[fr][i];
			indeg[temp]--;
			if(!indeg[temp])	Q.push(temp);
		}
	}
	for(int i = 0;i < cnt;i++)
		printf("%d ", order[i]);
}