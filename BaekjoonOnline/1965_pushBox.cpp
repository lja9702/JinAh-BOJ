#include <cstdio>
#include <vector>
using namespace std;
int main(){
	vector<int> V;
	int n, x, res = 0;
	scanf("%d", &n);
	V.push_back(-(1 << 29));
	for(int i = 0;i < n;i++){
		scanf("%d", &x);
		if(V.back()  < x)
			V.push_back(x), res++;
		else{
			vector<int>::iterator it = lower_bound(V.begin(), V.end(), x);
			*it = x;
		}
	}
	printf("%d\n", res);
}