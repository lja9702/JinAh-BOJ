#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
	vector<pair<int, int> > vt;
	vector<int> st;
	int x, y, n, res = 0;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d %d", &x, &y);
		vt.push_back(make_pair(x, y));
	}
	sort(vt.begin(), vt.end());
	st.push_back(-(1 << 29));
	vector<pair<int, int> >::iterator it;
	for(it = vt.begin();it != vt.end();it++){
		if(st.back() < it->second)
			st.push_back(it->second), res++;
		else{
			vector<int>::iterator tp = lower_bound(st.begin(), st.end(), it->second);
			*tp = it->second;
		}
	}
	printf("%d\n", n-res);
}