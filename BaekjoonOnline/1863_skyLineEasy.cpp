#include <cstdio>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> v;
stack<int> S;
int main(){
	int x, y, n, res = 0;
	scanf("%d\n", &n);
	for(int i = 0;i < n;i++){
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());
	for(int i = 0;i < v.size();i++){
		while(!S.empty() && S.top() > v[i].second)
			S.pop();
		if(!S.empty() && S.top() == v[i].second || !v[i].second)	continue;
		res++;
		S.push(v[i].second);
	}
	printf("%d\n", res);
}