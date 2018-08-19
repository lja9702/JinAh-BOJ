#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> v, stor[100001], res;
vector <pair<int, int> > temp;
int cnt = 0, arr[500001];
bool check[500001];
vector<int> f(vector<int> ori){
	vector<int> b;
	b.swap(ori);
	return b;
}
int main(){
	int n, a, b;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d %d", &a, &b);
		temp.push_back(make_pair(a, b)), arr[b] = a;
	}
	sort(temp.begin(), temp.end());
	for(int i = 0;i < n;i++)
		v.push_back(temp[i].second);
	stor[++cnt].push_back(v[0]);
	for(int i = 1;i < n;i++){
		if(stor[cnt].back() < v[i]){
			stor[cnt + 1] = f(stor[cnt]);
			stor[++cnt].push_back(v[i]);
		}
		else{
			vector<int>::iterator it = lower_bound(stor[cnt].begin(), stor[cnt].end(), v[i]);
			stor[it - stor[cnt].begin() + 1] = f(stor[it - stor[cnt].begin()]);
			stor[it - stor[cnt].begin() + 1].push_back(v[i]);
		}
	}
	int size = stor[cnt].size();
	for(int i = 0;i < size;i++)
		check[stor[cnt][i]] = 1;
	for(int i = 1;i < 500001;i++){
		if(arr[i] && !check[i])	res.push_back(arr[i]);
	}
	printf("%d\n", n - size);
	sort(res.begin(), res.end());
	for(int i = 0;i < n - size;i++)
		printf("%d\n", res[i]);
}
