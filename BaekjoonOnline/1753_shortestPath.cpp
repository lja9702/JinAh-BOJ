#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int, int> > graph[20001];
int v, e, st, cnt = 0, res[20001] = {0};

void dijkstra(){
	priority_queue<pair<int, int> > shortest;
	for(int i = 1;i <= v;i++)
		res[i] = 1 << 29;
	shortest.push(make_pair(st, 0)), res[st] = 0;
	while(!shortest.empty()){
		int st = shortest.top().first, dist = shortest.top().second;
		shortest.pop();
		if(dist != res[st])	continue;
		for(int i = 0;i < graph[st].size();i++){
			int wei = graph[st][i].second, end = graph[st][i].first;
			if(dist + wei < res[end]){
				res[end] = dist + wei;
				shortest.push(make_pair(end, dist + wei));
			}
		}
		cnt++;
	}
}
int main(){
	scanf("%d %d %d", &v, &e, &st);
	for(int i = 0;i < e;i++){
		int a, b, w;
		scanf("%d %d %d", &a, &b, &w);
		graph[a].push_back(make_pair(b, w));
	}
	dijkstra();
	for(int i = 1;i <= v;i++)
		(res[i] >= 1 << 29 ? printf("INF\n") : printf("%d\n", res[i]));
}