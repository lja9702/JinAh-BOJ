#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int n, x, y, min = 1 << 29;
vector <pair<int, int>> v;
bool compare (pair<int, int> a, pair<int, int> b) {
  if(a.first == b.first)
    return a.second > b.second;
  return a.first > b.first;
}
int main(){
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.begin() + n, compare);
}