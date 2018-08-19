#include <cstdio>
#include <utility>
#include <queue>
#include <cmath>
using namespace std;

pair<int, int> graph[1001];
priority_queue<pair<double, pair<int, int> >, vector<pair<double, pair<int, int> > >, greater<pair<double, pair<int, int> > > >pQ;
double sum = 0;
int n, m, root[1001] = {0}, depth[1001] = {0};
bool isSet(int a, int b){
	while(root[a] != a)	a = root[a];
	while(root[b] != b)	b = root[b];
	if(a == b)	return true;
	else	return false;
}
void makeSet(int a, int b){
	while(root[a] != a)	a = root[a];
	while(root[b] != b)	b = root[b];
	if(depth[a] > depth[b])	root[b] = a;
	else if(depth[a] < depth[b])	root[a] = b;
	else	root[b] = a, depth[a]++;
}
int main(){
	int x, y;
	scanf("%d %d", &n, &m);
	for(int i = 1;i <= n;i++){
		scanf("%d %d", &x, &y);
		graph[i] = make_pair(x, y), root[i] = i, depth[i] = 1;
	}
	for(int i = 0;i < m;i++){
		scanf("%d %d", &x, &y);
		if(!isSet(x, y))	makeSet(x, y);
	}
	for(int i = 1;i <= n;i++){
		for(int j = i + 1;j <= n;j++){
			if(!isSet(i, j)){
				long long aX = graph[i].first, aY = graph[i].second, bX = graph[j].first, bY = graph[j].second;
				double temp = sqrt((bX - aX) * (bX - aX) + (bY - aY) * (bY - aY));
				pQ.push(make_pair(temp, make_pair(i, j)));
			}
		}
	}
	while(!pQ.empty()){
		int a = pQ.top().second.first, b = pQ.top().second.second;
		double len = pQ.top().first;
		pQ.pop();
		if(isSet(a, b))	continue;
		makeSet(a, b);
		sum += len;
	}
	printf("%.2lf\n", sum);
}