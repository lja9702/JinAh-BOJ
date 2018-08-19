#include <cstdio>
#include <queue>
using namespace std;
int capacity[101][101], flow[101][101], V;
int networkflow(int source, int sink){
	memset(flow, 0, sizeof(flow));
	int totFlow = 0;
	while(1){
		vector<int> parent(100, -1);
		queue<int> Q;
		parent[source] = source;
		Q.push(source);
		while(!Q.empty() && parent[sink] == -1){
			int here = Q.front(), Q.pop();
			for(int there = 0;there < V;there++){
				if(capacity[here][there] - flow[here][there] > 0 && parent[there] == -1){
					Q.push(there);
					parent[there] = here;
				}
			}
		}
		if(parent[sink] == -1)	break;
		int amount = 1 << 29;
		for(int p = sink;p != source;p = parent[p])
			amount = min(capacity[parent[p]][p] - flow[parent[p]][p], amount);
		for(int p = sink;p != source;p = parent[p]){
			flow[parent[p]][p] += amount;
			flow[p][parent[p]] -= amount;
		}
		totFlow += amount;
	}
	return totFlow;
}
int main(){

}