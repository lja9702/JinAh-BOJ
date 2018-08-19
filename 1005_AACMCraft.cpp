#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int arr[1001] = {0}, indegree[1001] = {0}, timer[1001] = {0};
int main(){
	int n, k, i, a, b, w, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &k);
		vector<int> Set[1001];
		queue<int> Q;
		for(i = 1;i <= n;i++){
			scanf("%d", &arr[i]);
			timer[i] = arr[i];
		}
		for(i = 0;i < k;i++){
			scanf("%d %d", &a, &b);
			Set[a].push_back(b);
			indegree[b]++;
		}
		scanf("%d", &w);
		for(i = 1;i <= n;i++){
			if(indegree[i] == 0){
				Q.push(i);
				timer[i] = arr[i];
			}
		}
		while(!Q.empty()){
			int fr = Q.front();
			Q.pop();
			for(i = 0;i < Set[fr].size();i++){
				int temp = Set[fr][i];
				timer[temp] = max(timer[temp], timer[fr] + arr[temp]);
				indegree[temp]--;
				if(indegree[temp] == 0)
					Q.push(temp);
			}
		}
		printf("%d\n", timer[w]);
	}
}

//타임이라는 배열에 dp로 해당 인덱스까지의 걸린시간을 입력해놓은다.
//indegree배열이 0이되는 얘들을 큐에 넣는다.