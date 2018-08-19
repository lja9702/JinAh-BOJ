#include <cstdio>
#include <algorithm>
using namespace std;
struct Info{
	int a, b, cost;
	bool operator< (Info a){
		return this -> cost < a.cost;
	}
};
int n, m, k, t, root[1001] = {0}, res = 0;
bool check[1001];
Info arr[100001];
bool dJSet(int a, int b){
	while(root[a] != a)	a = root[a];
	while(root[b] != b)	b = root[b];
	if(a == b || (check[a] && check[b]))	return 0;
	if(check[a])	root[b] = a;
	else root[a] = b;
	return 1;
}
int main(){
	scanf("%d %d %d", &n, &m, &k);
	for(int i = 1;i <= n;i++)	root[i] = i;
	for(int i = 0;i < k;i++){
		scanf("%d", &t);
		check[t] = 1;
	}
	for(int i = 0;i < m;i++)
		scanf("%d %d %d", &arr[i].a, &arr[i].b, &arr[i].cost);
	sort(arr, arr + m);
	for(int i = 0;i < m;i++){
		int a = arr[i].a, b = arr[i].b, cost = arr[i].cost;
		if(dJSet(a, b))	res += cost;
	}
	printf("%d\n", res);
}