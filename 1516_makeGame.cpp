#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int n, build[501] = {0}, indeg[501] = {0}, time[501] = {0};
int main(){
	int temp = 0;
	vector<int> v[501];
	queue<int> Q;
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		scanf("%d", &build[i]);
		while(true){
			scanf("%d", &temp);
			if(temp == -1)	break;
			v[temp].push_back(i), indeg[i]++;
		}	
	}
	for(int i = 1;i <= n;i++){
		if(!indeg[i])	Q.push(i), time[i] = build[i];
	}
	while(!Q.empty()){
		int fr = Q.front();
		Q.pop();
		for(int i = 0;i < v[fr].size();i++){
			int temp = v[fr][i];
			time[temp] = std::max(time[temp], build[temp] + time[fr]);
			indeg[temp]--;
			if(!indeg[temp])	Q.push(temp);
		}
	}
	for(int i = 1;i <= n;i++)
		printf("%d\n", time[i]);
}