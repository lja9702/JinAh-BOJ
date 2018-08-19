#include <cstdio>
#include <deque>
using namespace std;
int arr[5000001] = {0};
int main(){
	int n, l;
	scanf("%d %d", &n, &l);
	for(int i = 1;i <= n;i++)
		scanf("%d", &arr[i]);
	deque<pair<int, int>> dq;
	for(int i = 1;i <= n;i++){
		if(dq.empty()){
			dq.push_back(make_pair(i, arr[i]));
			printf("%d ", dq.front().second);
			continue;
		}
		while(!dq.empty() && i - dq.front().first >= l)
			dq.pop_front();
		while(!dq.empty() && dq.back().second > arr[i])
			dq.pop_back();
		dq.push_back(make_pair(i, arr[i]));
		printf("%d ", dq.front().second);
	}
}