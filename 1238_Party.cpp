#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int res[1001] = {0}, n, m, x;
vector<pair<int, int> > town[1001];

void dijkstra(int start){
	int cost[1001] = {0};
	priority_queue<pair<int, int> > pQ;
	for(int i = 1;i <= n;i++)
		cost[i] = 1 << 29;
	pQ.push(make_pair(start, 0));
	cost[start] = 0;
	while(!pQ.empty()){
		int st = pQ.top().first, t = pQ.top().second;
		pQ.pop();
		if(cost[st] != t)	continue;
		for(int i = 0;i < town[st].size();i++){
			int end = town[st][i].first, wei = town[st][i].second;
			if(t + wei  < cost[end]){
				cost[end] = t + wei;
				pQ.push(make_pair(end, t + wei));
			}
		}
	}
	res[start] += cost[x];
	if(start == x){
		for(int i = 1;i <= n;i++)
			res[i] += cost[i];
	}
}
int main(){
	int a, b, w, r = 0;
	scanf("%d %d %d", &n, &m, &x);
	for(int i = 0;i < m;i++){
		scanf("%d %d %d", &a, &b, &w);
		town[a].push_back(make_pair(b, w));
	}
	for(int i = 1;i <= n;i++)	dijkstra(i);
	for(int i = 1;i <= n;i++)	r = max(r, res[i]);
	printf("%d\n", r);
}