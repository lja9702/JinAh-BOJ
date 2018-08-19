#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, tot = 0, source = 0, sink = 25;
int capa[53][53], flow[53][53];
vector<int> adj[53];
int chang(char a){
	if(a >= 'A' && a <= 'Z')	return a - 'A';
	return a - 'a' + 26;
}
void networkFlow(){
	while(1){
		vector<int> parent(53, -1);
		queue<int> Q;
		parent[source] = source;
		Q.push(source);
		while(!Q.empty() && parent[sink] == -1){
			int cur = Q.front();	Q.pop();
			for(int next = 0; next < adj[cur].size();next++){
				int temp = adj[cur][next];
				if(capa[cur][temp] - flow[cur][temp] > 0 && parent[temp] == -1){
					parent[temp] = cur;
					Q.push(temp);
				}
			}
		}
		if(parent[sink] == -1)	break;
		int amount = 1 << 29;
		for(int i = sink;i != source;i = parent[i])
			amount = min(amount, capa[parent[i]][i] - flow[parent[i]][i]);
		for(int i = sink;i != source;i = parent[i]){
			flow[parent[i]][i] += amount;
			flow[i][parent[i]] -= amount;
		}
		tot += amount;
	}
}
int main(){
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		int c, ta, tb;
		char a, b;
		scanf(" %c %c %d", &a, &b, &c);
		ta = chang(a), tb = chang(b);
		capa[ta][tb] += c, capa[tb][ta] += c;
		adj[ta].push_back(tb);
		adj[tb].push_back(ta);
	}
	networkFlow();
	printf("%d\n", tot);
}
